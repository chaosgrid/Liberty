#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);

#define public_48d55c _public_48d55c
#define public_48d578 _public_48d578
#define public_48d58a _public_48d58a
#define public_48d599 _public_48d599
#define public_48d5a0 _public_48d5a0

PROC_DECLARE(0x48d540, internal_48d540, public_48d540);
extern "C" NAKED register_t __cdecl internal_48d540()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x10
        push esi
        mov esi, ecx
        jne public_48d5a0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_48d55c
        mov ecx, dword ptr ds : [esi+0x14]
        push 0
        push ecx
        call eax
        add esp, 8
        public_48d55c : nop
        push edi
        push 0
        lea edi, ds:[esi-0x32C]
        call public_4424f0
        add esp, 4
        test edi, edi
        je public_48d599
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48d58a
        public_48d578 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48d578
        public_48d58a : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_48d599 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_48d5a0 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x48d540)
    }
}

#undef public_48d55c
#undef public_48d578
#undef public_48d58a
#undef public_48d599
#undef public_48d5a0
