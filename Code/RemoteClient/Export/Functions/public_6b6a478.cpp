#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a478, internal_6b6a478, public_6b6a478);
extern "C" NAKED register_t __cdecl internal_6b6a478()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b10c]
        UNREACHABLE_TRAP(0x6b6a478)
    }
}
