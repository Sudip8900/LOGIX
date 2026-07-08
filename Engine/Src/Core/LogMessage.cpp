#include<Logix/Core/LogMessage.h>

#include<utility>

namespace Logix {
    LogMessage::LogMessage(LogLevel level, std::string message):m_Level(level), m_Message(std::move(message)) {

    }

    LogLevel LogMessage::getLevel() const noexcept {
        return m_Level;
    }

    const std::string& LogMessage::getMessage() const noexcept {
        return m_Message;
    }
}
