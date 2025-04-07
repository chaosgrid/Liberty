#include "THORN-PCH.h"

PROC_DECLARE(0x6f38c80, internal_6f38c80, public_6f38c80);
extern "C" NAKED register_t __cdecl internal_6f38c80()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f38c80)
    }
}
