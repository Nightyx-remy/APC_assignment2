//
// Created by remy on 9/28/22.
//

#include "../../include/decorators/running_time_decorator.h"
#include <iostream>
#include <iomanip>

void lib::decorators::running_time_decorator::log(std::string_view msg) const {
    auto running_time = std::chrono::high_resolution_clock::now() - s_start_time;

    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(running_time);
    running_time -= seconds;

    auto nano = std::chrono::duration_cast<std::chrono::nanoseconds>(running_time);

    std::ostringstream oss;
    oss << '[' << seconds.count() << "." << std::setfill('0') << std::setw(9) << nano.count() << "] " << msg;

    base_decorator::log(oss.str());
}
