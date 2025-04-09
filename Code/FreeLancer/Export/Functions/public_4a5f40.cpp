#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);

#define public_4a5f5a _public_4a5f5a
#define public_4a5f76 _public_4a5f76
#define public_4a5f88 _public_4a5f88
#define public_4a5f97 _public_4a5f97
#define public_4a5f9e _public_4a5f9e

PROC_DECLARE(0x4a5f40, internal_4a5f40, public_4a5f40);
extern "C" NAKED register_t __cdecl internal_4a5f40()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x10
        push esi
        mov esi, ecx
        jne public_4a5f9e
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_4a5f5a
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call eax
        add esp, 4
        public_4a5f5a : nop
        push edi
        push 0
        lea edi, ds:[esi-0x32C]
        call public_4424f0
        add esp, 4
        test edi, edi
        je public_4a5f97
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4a5f88
        public_4a5f76 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4a5f76
        public_4a5f88 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_4a5f97 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_4a5f9e : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4a5f40)
    }
}

#undef public_4a5f5a
#undef public_4a5f76
#undef public_4a5f88
#undef public_4a5f97
#undef public_4a5f9e
