find_package(Magnum REQUIRED Audio GlfwApplication Primitives Shaders Shapes Text)
find_package(MagnumPlugins REQUIRED DrFlacAudioImporter FreeTypeFont PngImporter StbVorbisAudioImporter)
find_package(MagnumExtras REQUIRED Ui)

if(CORRADE_TARGET_APPLE)
    find_package(Magnum REQUIRED WindowlessCglApplication)
elseif(CORRADE_TARGET_UNIX)
    find_package(Magnum REQUIRED WindowlessGlxApplication)
elseif(CORRADE_TARGET_WINDOWS)
    if(NOT MAGNUM_TARGET_GLES OR MAGNUM_TARGET_DESKTOP_GLES)
        find_package(Magnum REQUIRED WindowlessWglApplication)
    else()
        find_package(Magnum REQUIRED WindowlessWindowsEglApplication)
    endif()
else()
    message(FATAL_ERROR "No windowless application available on this platform")
endif()

set_directory_properties(PROPERTIES CORRADE_USE_PEDANTIC_FLAGS ON)

set(
        Plog_Source

        Common/Plog/Init.h
        Common/Plog/Log.h
        Common/Plog/Logger.h
        Common/Plog/Record.h
        Common/Plog/Severity.h
        Common/Plog/Util.h
        Common/Plog/WinApi.h

        Common/Plog/Appenders/ColorConsoleAppender.h
        Common/Plog/Appenders/ConsoleAppender.h
        Common/Plog/Appenders/DebugOutputAppender.h
        Common/Plog/Appenders/EventLogAppender.h
        Common/Plog/Appenders/IAppender.h
        Common/Plog/Appenders/RollingFileAppender.h

        Common/Plog/Converters/NativeEOLConverter.h
        Common/Plog/Converters/UTF8Converter.h

        Common/Plog/Formatters/CsvFormatter.h
        Common/Plog/Formatters/FuncMessageFormatter.h
        Common/Plog/Formatters/MessageOnlyFormatter.h
        Common/Plog/Formatters/TxtFormatter.h
)

set(
        Properties_Source

        Common/Properties/Properties.cpp
        Common/Properties/Properties.h
        Common/Properties/PropertiesParser.cpp
        Common/Properties/PropertiesParser.h
        Common/Properties/PropertiesUtils.cpp
        Common/Properties/PropertiesUtils.h
)

set(
        Myriad_Source

        Myriad.cpp

        Client/MyriadClient.cpp
        Client/MyriadClient.h

        Server/MyriadServer.cpp
        Server/MyriadServer.h

        Common/Args.hxx

        ${Plog_Source}
        ${Properties_Source}
)

add_executable(Myriad ${Myriad_Source})

target_link_libraries(
        Myriad

        Magnum::Application
        Magnum::WindowlessApplication
        Magnum::Magnum

        Magnum::Audio
        Magnum::Primitives
        Magnum::Shaders
        Magnum::Shapes
        Magnum::Text

        MagnumPlugins::DrFlacAudioImporter
        MagnumPlugins::FreeTypeFont
        MagnumPlugins::PngImporter
        MagnumPlugins::StbVorbisAudioImporter

        MagnumExtras::Ui
)
