#include <Logix/Core/LogLevel.h>
#include <string_view>

namespace Logix
{
    std::string_view ToString(LogLevel level) noexcept
    {
        switch (level)
        {
            case LogLevel::Trace:
                return "TRACE";

            case LogLevel::Debug:
                return "DEBUG";

            case LogLevel::Info:
                return "INFO";

            case LogLevel::Warning:
                return "WARNING";

            case LogLevel::Error:
                return "ERROR";

            case LogLevel::Fatal:
                return "FATAL";
        }

        return "UNKNOWN";
    }
}