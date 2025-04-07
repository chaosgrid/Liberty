#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd7a, internal_6d5fd7a, public_6d5fd7a);
extern "C" NAKED register_t __cdecl internal_6d5fd7a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64088]
        UNREACHABLE_TRAP(0x6d5fd7a)
    }
}
