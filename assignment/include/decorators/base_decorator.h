//
// Created by remy on 9/28/22.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_BASE_DECORATOR_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_BASE_DECORATOR_H

#include "../ilogger.h"
#include <memory>

namespace lib::decorators {
    class base_decorator: public loggers::ilogger {
    public:
        explicit base_decorator(std::unique_ptr<loggers::ilogger> inner);
        void log(std::string_view msg) const override;
        ~base_decorator() noexcept override = default;
    private:
        std::unique_ptr<loggers::ilogger> m_inner;
    };
}

#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_BASE_DECORATOR_H
