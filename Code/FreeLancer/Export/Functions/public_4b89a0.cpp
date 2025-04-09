#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_442850);

#define public_4b89d0 _public_4b89d0
#define public_4b89e3 _public_4b89e3
#define public_4b89f2 _public_4b89f2

PROC_DECLARE(0x4b89a0, internal_4b89a0, public_4b89a0);
extern "C" NAKED register_t __cdecl internal_4b89a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        test byte ptr ds : [eax], 2
        je public_4b89f2
        cmp dword ptr ss : [esp+8], 0x1B
        jne public_4b89f2
        push 0
        call public_4424f0
        add esp, 4
        call public_442850
        test edi, edi
        je public_4b89f2
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4b89e3
        push esi
        mov edi, edi
        public_4b89d0 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4b89d0
        pop esi
        public_4b89e3 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_4b89f2 : nop
        xor al, al
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x4b89a0)
    }
}

#undef public_4b89d0
#undef public_4b89e3
#undef public_4b89f2
