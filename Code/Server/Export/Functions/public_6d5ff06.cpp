#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff06, internal_6d5ff06, public_6d5ff06);
extern "C" NAKED register_t __cdecl internal_6d5ff06()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64430]
        UNREACHABLE_TRAP(0x6d5ff06)
    }
}
