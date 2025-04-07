#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711110, internal_6711110, public_6711110);
extern "C" NAKED register_t __cdecl internal_6711110()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6711110)
    }
}
