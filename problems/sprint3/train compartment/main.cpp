#include <algorithm>
#include <iostream>
#include <cassert>

#include "train.h"

int CountCompartment(const std::vector<Compartment>& compartments, Place is_empty, Gender gender) {
    auto predicate = [=](const Compartment& compartment) {
        // Учитываем, что если gender == NOT_SPECIFIED, то подходят все купе.
        if (gender == Gender::NOT_SPECIFIED) {
            return (compartment.lower_left == is_empty
                    && compartment.lower_right == is_empty
                    && compartment.upper_left == is_empty
                    && compartment.upper_right == is_empty);
        } else {
            return (compartment.lower_left == is_empty
                    && compartment.lower_right == is_empty
                    && compartment.upper_left == is_empty
                    && compartment.upper_right == is_empty
                    && (compartment.gender == gender || compartment.gender == Gender::NOT_SPECIFIED)); // Учитываем купе без ограничений по гендеру
        }
    };

    return std::count_if(compartments.begin(), compartments.end(), predicate);
}

bool HasFreeCompartment(const std::vector<Compartment>& compartments, Gender gender) {
    // Используем find_if для поиска первого свободного купе.
    return std::find_if(compartments.begin(), compartments.end(),
                         [gender](const Compartment& compartment) {
        // Проверяем, является ли купе полностью свободным и соответствует ли полу.
        bool is_compartment_empty = (compartment.lower_left == Place::FREE &&
                                     compartment.lower_right == Place::FREE &&
                                     compartment.upper_left == Place::FREE &&
                                     compartment.upper_right == Place::FREE);

        if (gender == Gender::NOT_SPECIFIED) {
            return is_compartment_empty;
        } else if (compartment.gender == Gender::NOT_SPECIFIED) {
            return is_compartment_empty; // Купе без ограничений подходит.
        } else {
            return is_compartment_empty && compartment.gender == gender;
        }
    }) != compartments.end(); // Если find_if вернул итератор не на end(), значит купе найдено.
}

FreeCompartment HasFreeCompartment(const std::vector<Compartment>& compartments) {
    FreeCompartment result;
    result.has_free_compartment_for_men = HasFreeCompartment(compartments, Gender::MALE);
    result.has_free_compartment_for_women = HasFreeCompartment(compartments, Gender::FEMALE);
    result.has_free_compartment_for_all = HasFreeCompartment(compartments, Gender::NOT_SPECIFIED);
    return result;
}

CompartmentInfo GetCompartmentStat(const std::vector<Compartment>& compartments) {
    CompartmentInfo result;
    result.empty_for_men = CountCompartment(compartments, Place::FREE, Gender::MALE);
    result.empty_for_women = CountCompartment(compartments, Place::FREE, Gender::FEMALE);
    result.empty_for_all = CountCompartment(compartments, Place::FREE, Gender::NOT_SPECIFIED);

    result.full_for_men = CountCompartment(compartments, Place::NOT_FREE, Gender::MALE);
    result.full_for_women = CountCompartment(compartments, Place::NOT_FREE, Gender::FEMALE);
    result.full_for_all = CountCompartment(compartments, Place::NOT_FREE, Gender::NOT_SPECIFIED);

    return result;
}

int main() {
    Compartment free_men = {
          .gender = Gender::MALE, 
          .lower_left = Place::FREE, .lower_right = Place::FREE, 
          .upper_left = Place::FREE, .upper_right = Place::FREE};
    Compartment free_women = {
          .gender = Gender::FEMALE, 
          .lower_left = Place::FREE, .lower_right = Place::FREE, 
          .upper_left = Place::FREE, .upper_right = Place::FREE};
    Compartment free_not_spec = {
          .gender = Gender::NOT_SPECIFIED, 
          .lower_left = Place::FREE, .lower_right = Place::FREE, 
          .upper_left = Place::FREE, .upper_right = Place::FREE};
    Compartment full_men = {
          .gender = Gender::MALE, 
          .lower_left = Place::NOT_FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::NOT_FREE, .upper_right = Place::NOT_FREE};
    Compartment full_women = {
          .gender = Gender::FEMALE,
          .lower_left = Place::NOT_FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::NOT_FREE, .upper_right = Place::NOT_FREE};
    Compartment full_not_spec = {
          .gender = Gender::NOT_SPECIFIED, 
          .lower_left = Place::NOT_FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::NOT_FREE, .upper_right = Place::NOT_FREE};
    Compartment half_men = {
          .gender = Gender::MALE, 
          .lower_left = Place::FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::FREE, .upper_right = Place::NOT_FREE};
    Compartment half_women = {
          .gender = Gender::FEMALE,
          .lower_left = Place::FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::FREE, .upper_right = Place::NOT_FREE};
    Compartment half_not_spec = {
          .gender = Gender::NOT_SPECIFIED, 
          .lower_left = Place::FREE, .lower_right = Place::NOT_FREE,
          .upper_left = Place::FREE, .upper_right = Place::NOT_FREE};

    {
        std::vector<Compartment> compartments = {
          free_men
        };
        
        auto info = GetCompartmentStat(compartments);
        assert(info.empty_for_all == 0
               && info.empty_for_men == 1
               && info.empty_for_women == 0
               && info.full_for_all == 0
               && info.full_for_men == 0
               && info.full_for_women == 0);

    }

    {
        std::vector<Compartment> compartments = {
          free_men, free_men, free_women
        };
        auto info = GetCompartmentStat(compartments);
        assert(info.empty_for_all == 0
               && info.empty_for_men == 2
               && info.empty_for_women == 1
               && info.full_for_all == 0
               && info.full_for_men == 0
               && info.full_for_women == 0);

    }

    {
        std::vector<Compartment> compartments = {
          free_women, free_women, free_not_spec
        };
        auto info = GetCompartmentStat(compartments);
        assert(info.empty_for_all == 1
               && info.empty_for_men == 0
               && info.empty_for_women == 2
               && info.full_for_all == 0
               && info.full_for_men == 0
               && info.full_for_women == 0);

    }

    {
        std::vector<Compartment> compartments = {
          full_men, full_women, full_not_spec, half_women
        };
        auto info = GetCompartmentStat(compartments);
        assert(info.empty_for_all == 0
               && info.empty_for_men == 0
               && info.empty_for_women == 0
               && info.full_for_all == 1
               && info.full_for_men == 1
               && info.full_for_women == 1);

    }
    
    {
        // Полузаполненные купе не считаем.
        std::vector<Compartment> compartments = {
          half_men, full_women, half_not_spec
        };
        auto info = GetCompartmentStat(compartments);
        assert(info.empty_for_all == 0
               && info.empty_for_men == 0
               && info.empty_for_women == 0
               && info.full_for_all == 0
               && info.full_for_men == 0
               && info.full_for_women == 1);

    }
    std::cout << "ok" << std::endl;
}