#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0a4, internal_6b6a0a4, public_6b6a0a4);
extern "C" NAKED register_t __cdecl internal_6b6a0a4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b184]
        UNREACHABLE_TRAP(0x6b6a0a4)
    }
}
