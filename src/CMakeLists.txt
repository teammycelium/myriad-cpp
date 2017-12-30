find_package(Magnum REQUIRED Audio GlfwApplication Primitives Shaders Shapes Text)
find_package(MagnumPlugins REQUIRED DrFlacAudioImporter FreeTypeFont PngImporter StbVorbisAudioImporter)
find_package(MagnumExtras REQUIRED Ui)

set_directory_properties(PROPERTIES CORRADE_USE_PEDANTIC_FLAGS ON)

add_executable(Myriad Myriad.cpp)

target_link_libraries(
        Myriad

        Magnum::Application
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
