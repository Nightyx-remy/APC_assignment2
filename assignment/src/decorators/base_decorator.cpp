//
// Created by remy on 9/28/22.
//

#include "../../include/decorators/base_decorator.h"

lib::decorators::base_decorator::base_decorator(std::unique_ptr<loggers::ilogger> inner) : m_inner(std::move(inner)) {}

void lib::decorators::base_decorator::log(std::string_view msg) const {
    m_inner->log(msg);
}
