//
// Created by dza02 on 8/28/2021.
//

#ifndef LESSON_TIMESTAMP_DECORATOR_H
#define LESSON_TIMESTAMP_DECORATOR_H

#include <string>
#include <memory>
#include "base_decorator.h"

namespace lib::decorators {
    class timestamp_decorator: public lib::decorators::base_decorator {
    public:
        using base_decorator::base_decorator;
        void log(std::string_view msg) const override;
    };
}

#endif //LESSON_TIMESTAMP_DECORATOR_H
