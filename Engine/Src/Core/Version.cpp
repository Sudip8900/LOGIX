#include <Logix/Core/Version.h>

#include <string>

namespace Logix
{
    std::string Version::VersionString()
    {
        return std::to_string(m_major) + "." +
               std::to_string(m_minor) + "." +
               std::to_string(m_patch);
    }
}