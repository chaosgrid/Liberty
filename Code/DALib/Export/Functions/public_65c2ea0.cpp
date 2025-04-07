#include "DALib-PCH.h"

PROC_DECLARE(0x65c2ea0, internal_65c2ea0, public_65c2ea0);
extern "C" NAKED register_t __cdecl internal_65c2ea0()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65c2ea0)
    }
}
