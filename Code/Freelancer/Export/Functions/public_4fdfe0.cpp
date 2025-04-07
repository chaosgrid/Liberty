#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fdda0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4fdff7 _public_4fdff7
#define public_4fe00d _public_4fe00d
#define public_4fe02c _public_4fe02c

PROC_DECLARE(0x4fdfe0, internal_4fdfe0, public_4fdfe0);
extern "C" NAKED register_t __cdecl internal_4fdfe0()
{
    __asm
    {
        push esi
        push 0x29
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4fdff7
        xor al, al
        pop esi
        ret 4
        public_4fdff7 : nop
        fld dword ptr ds : [esi+0x7C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fe00d
        xor al, al
        pop esi
        ret 4
        public_4fe00d : nop
        push 0x29
        call public_5792b0
        add esp, 4
        cmp eax, 1
        jne public_4fe02c
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_4fdda0
        pop esi
        ret 4
        public_4fe02c : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4fdfe0)
    }
}

#undef public_4fdff7
#undef public_4fe00d
#undef public_4fe02c
