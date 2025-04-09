#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_41a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_51b490);

PROC_DECLARE(0x51b490, internal_51b490, public_51b490);
extern "C" NAKED register_t __cdecl internal_51b490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0
        push eax
        call public_40fb80
        call public_41a3d0
        ret 4
        UNREACHABLE_TRAP(0x51b490)
    }
}
