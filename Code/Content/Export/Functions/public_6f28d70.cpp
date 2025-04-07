#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);

PROC_DECLARE(0x6f28d70, internal_6f28d70, public_6f28d70);
extern "C" NAKED register_t __cdecl internal_6f28d70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f67090
        add esp, 4
        mov ecx, esi
        call public_6f57b00
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f28d70)
    }
}
