#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b75350, internal_6b75350, public_6b75350);
extern "C" NAKED register_t __cdecl internal_6b75350()
{
    __asm
    {
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6b75350)
    }
}
