#pragma once
#include "../Record.h"

namespace plog
{
    class IAppender
    {
    public:
        virtual ~IAppender()
        {
        }

        virtual void write(const Record& record) = 0;
    };
}
