#pragma once

#include<Logix/Core/LogMessage.h>

namespace Logix {
    class LogSink {
    public:
        virtual ~LogSink() = default;
        virtual void write(const LogMessage& message) = 0;
    };
}