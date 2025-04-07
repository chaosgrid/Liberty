#include "Server-PCH.h"

PROC_DECLARE(0x6d06e80, internal_6d06e80, public_6d06e80);
extern "C" NAKED register_t __cdecl internal_6d06e80()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d06e80)
    }
}
