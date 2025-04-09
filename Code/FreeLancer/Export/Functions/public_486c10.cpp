#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_486c26 _public_486c26
#define public_486c43 _public_486c43

PROC_DECLARE(0x486c10, internal_486c10, public_486c10);
extern "C" NAKED register_t __cdecl internal_486c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        jne public_486c26
        push 1
        call public_41dda0
        add esp, 4
        public_486c26 : nop
        call public_45a9f0
        mov ecx, esi
        call public_5a0760
        mov al, byte ptr ds : [esi+0x33E]
        test al, al
        je public_486c43
        mov byte ptr ds : [esi+0x33D], 1
        public_486c43 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x486c10)
    }
}

#undef public_486c26
#undef public_486c43
