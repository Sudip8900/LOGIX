#include <Logix/Core/ConsoleSink.h>

#include <Logix/Core/LogLevel.h>

#include <fmt/core.h>

namespace Logix
{
    void ConsoleSink::Write(const LogMessage& message)
    {
        fmt::print(
            "[{}] {}\n",
            ToString(message.GetLevel()),
            message.GetMessage()
        );
    }
}