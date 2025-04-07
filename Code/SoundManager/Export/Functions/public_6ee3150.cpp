#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee4740);
CLANG_FORWARD_PROC_SYMBOL(public_6ee76d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee80d0);

#define public_6ee3184 _public_6ee3184
#define public_6ee318c _public_6ee318c
#define public_6ee31c5 _public_6ee31c5

PROC_DECLARE(0x6ee3150, internal_6ee3150, public_6ee3150);
extern "C" NAKED register_t __cdecl internal_6ee3150()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        lea esi, ds:[ebx+0xF8]
        push eax
        mov ecx, esi
        call public_6ee80d0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6ee3184
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6ee3184
        lea eax, ss:[esp+0x14]
        jmp public_6ee318c
        public_6ee3184 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6ee318c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0xFC]
        je public_6ee31c5
        mov edi, dword ptr ds : [eax+0x10]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6ee76d0
        test edi, edi
        je public_6ee31c5
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6ee4740
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6ee31c5 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ee3150)
    }
}

#undef public_6ee3184
#undef public_6ee318c
#undef public_6ee31c5
