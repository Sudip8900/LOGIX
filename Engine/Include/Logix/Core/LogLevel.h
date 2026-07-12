#pragma once

#include<string_view>

namespace Logix {
    enum class LogLevel {
        Trace,
        Debug,
        Info,
        Warning,
        Error,
        Fatal
    };

    [[nodiscard]] std::string_view ToString(LogLevel level) noexcept;
}