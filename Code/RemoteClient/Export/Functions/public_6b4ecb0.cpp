#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b4ecb0, internal_6b4ecb0, public_6b4ecb0);
extern "C" NAKED register_t __cdecl internal_6b4ecb0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6b4ecb0)
    }
}
