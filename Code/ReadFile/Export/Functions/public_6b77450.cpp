#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77450, internal_6b77450, public_6b77450);
extern "C" NAKED register_t __cdecl internal_6b77450()
{
    __asm
    {
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x6b77450)
    }
}
