#include "DALib-PCH.h"

PROC_DECLARE(0x65c5b30, internal_65c5b30, public_65c5b30);
extern "C" NAKED register_t __cdecl internal_65c5b30()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x65c5b30)
    }
}
