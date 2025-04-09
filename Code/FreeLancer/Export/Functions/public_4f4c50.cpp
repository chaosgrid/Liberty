#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4f4c92 _public_4f4c92

PROC_DECLARE(0x4f4c50, internal_4f4c50, public_4f4c50);
extern "C" NAKED register_t __cdecl internal_4f4c50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_4f4c92
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4f4c92
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4f4c92
        call public_54baf0
        test eax, eax
        je public_4f4c92
        push 0
        mov ecx, esi
        call public_5a0c30
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        public_4f4c92 : nop
        push 1
        mov ecx, esi
        call public_5a0c30
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f4c50)
    }
}

#undef public_4f4c92
