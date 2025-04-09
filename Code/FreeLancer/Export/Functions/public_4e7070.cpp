#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4059d0);
CLANG_FORWARD_PROC_SYMBOL(public_4e6cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4e6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7070);

PROC_DECLARE(0x4e7070, internal_4e7070, public_4e7070);
extern "C" NAKED register_t __cdecl internal_4e7070()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x3A0]
        call public_4059d0
        mov ecx, esi
        call public_4e6cb0
        mov ecx, esi
        pop esi
        jmp public_4e6ec0
        UNREACHABLE_TRAP(0x4e7070)
    }
}
