#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0ce, internal_6b6a0ce, public_6b6a0ce);
extern "C" NAKED register_t __cdecl internal_6b6a0ce()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b12c]
        UNREACHABLE_TRAP(0x6b6a0ce)
    }
}
