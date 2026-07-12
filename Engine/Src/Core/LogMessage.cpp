#include<Logix/Core/LogMessage.h>

#include<utility>

namespace Logix {
    LogMessage::LogMessage(LogLevel level, std::string message):m_level(level), m_message(std::move(message)) {

    }

    LogLevel LogMessage::GetLevel() const noexcept {
        return m_level;
    }

    const std::string& LogMessage::GetMessage() const noexcept {
        return m_message;
    }
}
