#include "RP8-PCH.h"

PROC_DECLARE(0x6d5cf68, internal_6d5cf68, public_6d5cf68);
extern "C" NAKED register_t __cdecl internal_6d5cf68()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e110]
        UNREACHABLE_TRAP(0x6d5cf68)
    }
}
