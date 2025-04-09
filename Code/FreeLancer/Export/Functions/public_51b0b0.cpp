#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51cb70);
CLANG_FORWARD_PROC_SYMBOL(public_576190);

PROC_DECLARE(0x51b0b0, internal_51b0b0, public_51b0b0);
extern "C" NAKED register_t __cdecl internal_51b0b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0xF8]
        call public_576190
        mov ecx, esi
        pop esi
        jmp public_51cb70
        UNREACHABLE_TRAP(0x51b0b0)
    }
}
