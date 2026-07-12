add_library(LOGIX STATIC
        Include/Logix/Core/LogCategory.h)

target_sources(LOGIX
        PRIVATE
        Src/Core/Version.cpp
        Src/Core/LogLevel.cpp
        Src/Core/LogMessage.cpp
        Src/Core/ConsoleSink.cpp
        Src/Core/LogCategory.cpp

        PUBLIC
        Include/Logix/Core/Types.h
        Include/Logix/Core/Version.h
        Include/Logix/Core/LogLevel.h
        Include/Logix/Core/LogMessage.h
        Include/Logix/Core/LogSink.h
        Include/Logix/Core/ConsoleSink.h
        Include/Logix/Core/Logger.h
        Include/Logix/Core/LogCategory.h
)

target_link_libraries(LOGIX
        PUBLIC
        fmt::fmt
)

target_include_directories(LOGIX
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Include
)

target_compile_features(LOGIX
        PUBLIC
        cxx_std_20
)