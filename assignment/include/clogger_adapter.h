//
// Created by remy on 9/26/22.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H

#include "ilogger.h"
#include <chrono>
#include "../clib/logger.h"

namespace lib {
    class clogger_adapter : public loggers::ilogger {
    public:
        explicit clogger_adapter(std::chrono::seconds rolling_interval);
        void log(std::string_view msg) const override;
        ~clogger_adapter() noexcept override;
    private:
        lg_logger_t* m_clogger;
    };
}

#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H
