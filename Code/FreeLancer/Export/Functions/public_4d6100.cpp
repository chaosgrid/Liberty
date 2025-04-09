#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4d612a _public_4d612a

PROC_DECLARE(0x4d6100, internal_4d6100, public_4d6100);
extern "C" NAKED register_t __cdecl internal_4d6100()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_4d612a
        call public_54baf0
        test eax, eax
        je public_4d612a
        push 0
        mov ecx, esi
        call public_5a0c30
        or byte ptr ds : [esi+0x6C], 1
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        public_4d612a : nop
        push 1
        mov ecx, esi
        call public_5a0c30
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x4d6100)
    }
}

#undef public_4d612a
