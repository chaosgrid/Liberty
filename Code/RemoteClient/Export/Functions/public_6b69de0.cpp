#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69de0, internal_6b69de0, public_6b69de0);
extern "C" NAKED register_t __cdecl internal_6b69de0()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2c4]
        UNREACHABLE_TRAP(0x6b69de0)
    }
}
