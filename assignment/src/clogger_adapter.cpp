//
// Created by remy on 9/26/22.
//

#include "clogger_adapter.h"
#include <iostream>

lib::clogger_adapter::clogger_adapter(std::chrono::seconds rolling_interval) : m_clogger{nullptr} {
    if (lg_create(&m_clogger, rolling_interval.count()) == lgr_error) {
        throw std::runtime_error("Failed to create logger!");
    }
    lg_set_debug_output(m_clogger, true);
}

lib::clogger_adapter::~clogger_adapter() noexcept {
    lg_destroy(&m_clogger);
}

void lib::clogger_adapter::log(std::string_view msg) const {
    lg_log(m_clogger, std::string(msg).c_str());
}
