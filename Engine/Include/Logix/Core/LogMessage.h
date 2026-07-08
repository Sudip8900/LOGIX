#pragma once

#include<string>

#include <Logix/Core/LogLevel.h>

namespace Logix {
    class LogMessage {
    public:
        LogMessage(LogLevel level, std::string message);

        [[nodiscard]] LogLevel getLevel() const noexcept;

        [[nodiscard]] const std::string& getMessage() const noexcept;

    private:
        LogLevel m_Level;
        std::string m_Message;
    };
}