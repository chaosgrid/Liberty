#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_541040);
CLANG_FORWARD_PROC_SYMBOL(public_5424e0);

#define public_5424f0 _public_5424f0
#define public_542514 _public_542514
#define public_54251b _public_54251b

PROC_DECLARE(0x5424e0, internal_5424e0, public_5424e0);
extern "C" NAKED register_t __cdecl internal_5424e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        je public_54251b
        push edi
        lea esp, ss:[esp]
        public_5424f0 : nop
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+0x14]
        mov ecx, esi
        call dword ptr ds : [eax+0x158]
        test al, al
        je public_542514
        push esi
        call public_541040
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 4
        lea ecx, ds:[esi+0xC]
        push 1
        call dword ptr ds : [edx]
        public_542514 : nop
        test edi, edi
        mov esi, edi
        jne public_5424f0
        pop edi
        public_54251b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5424e0)
    }
}

#undef public_5424f0
#undef public_542514
#undef public_54251b
