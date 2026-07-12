#pragma once

#include <Logix/Core/LogSink.h>

namespace Logix {
    class ConsoleSink final : public LogSink
    {
    public:
        void Write(const LogMessage& message) override;
    };
}