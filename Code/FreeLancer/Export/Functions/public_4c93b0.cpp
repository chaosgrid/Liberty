#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_59f510);

PROC_DECLARE(0x4c93b0, internal_4c93b0, public_4c93b0);
extern "C" NAKED register_t __cdecl internal_4c93b0()
{
    __asm
    {
        push esi
        push 0xB71
        mov esi, ecx
        call public_421ed0
        add esp, 4
        mov ecx, esi
        pop esi
        jmp public_59f510
        UNREACHABLE_TRAP(0x4c93b0)
    }
}
