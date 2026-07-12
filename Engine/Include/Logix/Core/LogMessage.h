#pragma once

#include<string>

#include <Logix/Core/LogLevel.h>

namespace Logix {
    class LogMessage
    {
    public:
        LogMessage(LogLevel level, std::string message);

        [[nodiscard]]
        LogLevel GetLevel() const noexcept;

        [[nodiscard]]
        const std::string& GetMessage() const noexcept;

    private:
        LogLevel m_level;
        std::string m_message;
    };
}