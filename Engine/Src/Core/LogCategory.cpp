#include <Logix/Core/LogCategory.h>

namespace Logix
{
    std::string_view ToString(LogCategory category) noexcept
    {
        switch (category)
        {
            case LogCategory::Core:
                return "CORE";

            case LogCategory::Physics:
                return "PHYSICS";

            case LogCategory::Collision:
                return "COLLISION";

            case LogCategory::Math:
                return "MATH";

            case LogCategory::Rendering:
                return "RENDERING";

            case LogCategory::Memory:
                return "MEMORY";

            case LogCategory::Editor:
                return "EDITOR";

            case LogCategory::Sandbox:
                return "SANDBOX";
        }

        return "UNKNOWN";
    }
}