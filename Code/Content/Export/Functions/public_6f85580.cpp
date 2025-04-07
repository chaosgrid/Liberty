#include "Content-PCH.h"

PROC_DECLARE(0x6f85580, internal_6f85580, public_6f85580);
extern "C" NAKED register_t __cdecl internal_6f85580()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x6f85580)
    }
}
