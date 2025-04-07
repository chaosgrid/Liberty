#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a01a, internal_6b6a01a, public_6b6a01a);
extern "C" NAKED register_t __cdecl internal_6b6a01a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b0a4]
        UNREACHABLE_TRAP(0x6b6a01a)
    }
}
