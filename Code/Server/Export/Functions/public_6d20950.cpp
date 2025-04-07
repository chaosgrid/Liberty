#include "Server-PCH.h"

PROC_DECLARE(0x6d20950, internal_6d20950, public_6d20950);
extern "C" NAKED register_t __cdecl internal_6d20950()
{
    __asm
    {
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d20950)
    }
}
