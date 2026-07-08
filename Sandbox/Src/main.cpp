#include <iostream>
#include <Logix/Core/Version.h>
#include <Logix/Core/Types.h>

#include "fmt/compile.h"
#include "Logix/Core/LogLevel.h"
#include "Logix/Core/LogMessage.h"

using namespace std;

int main() {
    std::cout<<"=====================\n";
    std::cout<< Logix::Version::EngineName()<<'\n';
    std::cout<< "Version: " << Logix::Version::VersionString() << '\n';
    std::cout<<"=====================\n";

    Logix::u32 count = 100;
    Logix::f32 gravity = 9.81f;

    std::cout<< "Count: " << count << '\n';
    std::cout<<"Gravity: " << gravity << '\n';
    std::cout<<"=====================\n";

    fmt::print("Hello From LOGIX {}\n", Logix::Version::VersionString());

    Logix::LogLevel level = Logix::LogLevel::Error;

    Logix::LogMessage message(Logix::LogLevel::Info, "Physics World Created");

    std::cout<<message.getMessage()<<'\n';

    return 0;
}