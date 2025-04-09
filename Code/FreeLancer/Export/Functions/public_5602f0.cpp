#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5602f0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);

PROC_DECLARE(0x5602f0, internal_5602f0, public_5602f0);
extern "C" NAKED register_t __cdecl internal_5602f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0xF
        lea ecx, ds:[esi+0x80]
        call public_5760f0
        mov ecx, esi
        pop esi
        jmp public_591de0
        UNREACHABLE_TRAP(0x5602f0)
    }
}
