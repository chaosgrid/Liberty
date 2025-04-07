#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a12e, internal_6b6a12e, public_6b6a12e);
extern "C" NAKED register_t __cdecl internal_6b6a12e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b174]
        UNREACHABLE_TRAP(0x6b6a12e)
    }
}
