#pragma once

#include <Logix/Core/LogMessage.h>

namespace Logix {
    class LogSink {
    public:
        virtual ~LogSink() = default;

        virtual void Write(const LogMessage& message) = 0;
    };
}