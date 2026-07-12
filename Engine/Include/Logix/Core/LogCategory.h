#pragma once

#include <string_view>

namespace Logix {
    enum class LogCategory {
        Core,
        Application,
        Sandbox,

        Math,
        Physics,
        Collision,

        Rendering,
        Editor,

        Memory,
        Platform
    };

    [[nodiscard]] std::string_view ToString(LogCategory category) noexcept;
}