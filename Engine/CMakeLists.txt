ADD_LIBRARY(LOGIX STATIC
        Include/Logix/Core/Types.h
        Include/Logix/Core/Logger.h
        Include/Logix/Core/LogLevel.h
)

target_sources(
        LOGIX
        PRIVATE
        Src/Core/Version.cpp
)

target_link_libraries(
        LOGIX
        PUBLIC
            fmt::fmt
)

target_include_directories(
        LOGIX
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(LOGIX PUBLIC cxx_std_20)