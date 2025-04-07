#include "THORN-PCH.h"

PROC_DECLARE(0x6f38c90, internal_6f38c90, public_6f38c90);
extern "C" NAKED register_t __cdecl internal_6f38c90()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f38c90)
    }
}
