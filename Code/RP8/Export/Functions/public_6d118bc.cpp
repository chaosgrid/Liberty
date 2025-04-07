#include "RP8-PCH.h"

PROC_DECLARE(0x6d118bc, internal_6d118bc, public_6d118bc);
extern "C" NAKED register_t __cdecl internal_6d118bc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0xFFFFFFF9
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d118bc)
    }
}
