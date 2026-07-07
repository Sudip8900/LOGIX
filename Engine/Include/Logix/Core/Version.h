#pragma once

#include <string>
#include <string_view>

namespace Logix {
    class Version {
    public:
        [[nodiscard]] static constexpr std::string_view EngineName() noexcept {
            return m_engineName;
        }

        [[nodiscard]] static constexpr int Major() noexcept {
            return m_major;
        }

        [[nodiscard]] static constexpr int Minor() noexcept {
            return m_minor;
        }

        [[nodiscard]] static constexpr int Patch() noexcept {
            return m_patch;
        }

        [[nodiscard]] static std::string VersionString();

    private:
        static constexpr std::string_view m_engineName = "LOGIX Physics Engine";

        static constexpr int m_major = 0;
        static constexpr int m_minor = 1;
        static constexpr int m_patch = 0;
    };
}