#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_564700);
CLANG_FORWARD_PROC_SYMBOL(public_5b0880);

#define public_564713 _public_564713
#define public_564745 _public_564745
#define public_564759 _public_564759

PROC_DECLARE(0x564700, internal_564700, public_564700);
extern "C" NAKED register_t __cdecl internal_564700()
{
    __asm
    {
        push ecx
        call public_5b0880
        test al, al
        jne public_564713
        call public_42d730
        test al, al
        je public_564759
        public_564713 : nop
        mov eax, dword ptr ds : [public_67a51c]
        test eax, eax
        jne public_564745
        mov eax, dword ptr ds : [public_614a5c]
        push eax
        call dword ptr ds : [public_5c6020]
        lea ecx, ss:[esp+4]
        push ecx
        mov dword ptr ss : [esp+8], eax
        call public_42ae40
        mov dword ptr ds : [public_67a51c], eax
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_564745 : nop
        mov eax, dword ptr ds : [public_67a51c]
        push 0
        push 0
        push 0
        push eax
        call public_428680
        add esp, 0x10
        public_564759 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x564700)
    }
}

#undef public_564713
#undef public_564745
#undef public_564759
