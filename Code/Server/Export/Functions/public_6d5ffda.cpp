#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffda, internal_6d5ffda, public_6d5ffda);
extern "C" NAKED register_t __cdecl internal_6d5ffda()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64aec]
        UNREACHABLE_TRAP(0x6d5ffda)
    }
}
