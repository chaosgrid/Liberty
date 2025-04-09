#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_47248c _public_47248c
#define public_4724a0 _public_4724a0
#define public_4724b3 _public_4724b3
#define public_4724c8 _public_4724c8

PROC_DECLARE(0x472450, internal_472450, public_472450);
extern "C" NAKED register_t __cdecl internal_472450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test byte ptr ds : [eax], 2
        jne public_4724c8
        cmp dword ptr ss : [esp+8], 0x1B
        jne public_4724c8
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x338]
        push ecx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_47248c
        mov edx, dword ptr ds : [esi+0x334]
        push 0
        push edx
        call eax
        add esp, 8
        public_47248c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4724b3
        push edi
        mov edi, edi
        public_4724a0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4724a0
        pop edi
        public_4724b3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov al, 1
        pop esi
        ret 8
        public_4724c8 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x472450)
    }
}

#undef public_47248c
#undef public_4724a0
#undef public_4724b3
#undef public_4724c8
