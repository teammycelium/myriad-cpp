#ifndef MYRIAD_MYRIADSERVER_H
#define MYRIAD_MYRIADSERVER_H

#include <Magnum/Magnum.h>

#ifdef CORRADE_TARGET_APPLE
#include <Magnum/Platform/WindowlessCglApplication.h>
#elif defined(CORRADE_TARGET_UNIX)
#include <Magnum/Platform/WindowlessGlxApplication.h>
#elif defined(CORRADE_TARGET_WINDOWS)
#if !defined(MAGNUM_TARGET_GLES) || defined(MAGNUM_TARGET_DESKTOP_GLES)
#include <Magnum/Platform/WindowlessWglApplication.h>
#else
#include <Magnum/Platform/WindowlessWindowsEglApplication.h>
#endif
#else
#error no windowless application available on this platform
#endif


namespace Myriad {
    namespace Server {
        class MyriadServer : public Magnum::Platform::WindowlessApplication {
        public:
            explicit MyriadServer(const Arguments& arguments);

            int exec() override;
        };
    }
}

#endif //MYRIAD_MYRIADSERVER_H
