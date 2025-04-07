#include "Content-PCH.h"

PROC_DECLARE(0x6ea14a0, internal_6ea14a0, public_6ea14a0);
extern "C" NAKED register_t __cdecl internal_6ea14a0()
{
    __asm
    {
        mov eax, offset public_6fb384c
        ret 4
        UNREACHABLE_TRAP(0x6ea14a0)
    }
}
