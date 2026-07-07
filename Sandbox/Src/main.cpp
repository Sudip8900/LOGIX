#include <iostream>
#include <Logix/Core/Version.h>
#include <Logix/Core/Types.h>

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

    return 0;
}