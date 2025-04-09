#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_442850);

#define public_4b93a0 _public_4b93a0
#define public_4b93b3 _public_4b93b3
#define public_4b93c2 _public_4b93c2
#define public_4b93c8 _public_4b93c8

PROC_DECLARE(0x4b9370, internal_4b9370, public_4b9370);
extern "C" NAKED register_t __cdecl internal_4b9370()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x10
        jne public_4b93c8
        push edi
        push 0
        lea edi, ds:[ecx-0x32C]
        call public_4424f0
        add esp, 4
        call public_442850
        test edi, edi
        je public_4b93c2
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4b93b3
        push esi
        lea esp, ss:[esp]
        public_4b93a0 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4b93a0
        pop esi
        public_4b93b3 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_4b93c2 : nop
        mov al, 1
        pop edi
        ret 4
        public_4b93c8 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x4b9370)
    }
}

#undef public_4b93a0
#undef public_4b93b3
#undef public_4b93c2
#undef public_4b93c8
