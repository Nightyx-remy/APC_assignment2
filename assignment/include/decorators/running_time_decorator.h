//
// Created by remy on 9/28/22.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNING_TIME_DECORATOR_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNING_TIME_DECORATOR_H

#include "base_decorator.h"
#include <chrono>

namespace lib::decorators {

    class running_time_decorator: public lib::decorators::base_decorator {
    public:
        using base_decorator::base_decorator;
        void log(std::string_view msg) const override;
    private:
        static inline const std::chrono::time_point<std::chrono::high_resolution_clock> s_start_time = std::chrono::high_resolution_clock::now();
    };

}

#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNING_TIME_DECORATOR_H
