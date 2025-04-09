#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c81d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59f360);

#define public_4c93fc _public_4c93fc
#define public_4c93fe _public_4c93fe
#define public_4c9421 _public_4c9421

PROC_DECLARE(0x4c93d0, internal_4c93d0, public_4c93d0);
extern "C" NAKED register_t __cdecl internal_4c93d0()
{
    __asm
    {
        mov al, byte ptr ds : [public_673560]
        test al, al
        push esi
        mov esi, ecx
        je public_4c93fc
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c93fc
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4c93fc
        mov al, 1
        jmp public_4c93fe
        public_4c93fc : nop
        xor al, al
        public_4c93fe : nop
        mov cl, byte ptr ds : [esi+0x6C]
        shl al, 1
        xor al, cl
        and al, 2
        xor al, cl
        mov byte ptr ds : [esi+0x6C], al
        mov al, byte ptr ds : [esi+0xDC]
        test al, al
        je public_4c9421
        lea ecx, ds:[esi+0xF4]
        call public_4c81d0
        public_4c9421 : nop
        mov ecx, esi
        pop esi
        jmp public_59f360
        UNREACHABLE_TRAP(0x4c93d0)
    }
}

#undef public_4c93fc
#undef public_4c93fe
#undef public_4c9421
