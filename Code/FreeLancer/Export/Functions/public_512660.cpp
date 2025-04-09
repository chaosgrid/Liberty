#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512660);
CLANG_FORWARD_PROC_SYMBOL(public_5129f0);

#define public_512699 _public_512699
#define public_5126d1 _public_5126d1

PROC_DECLARE(0x512660, internal_512660, public_512660);
extern "C" NAKED register_t __cdecl internal_512660()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_5c70bc]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        cmp dword ptr ds : [esi+4], eax
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_512699
        lea ecx, ds:[edi+4]
        push ecx
        add eax, 0x10
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_512699
        mov esi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_512699 : nop
        push edi
        mov ecx, esi
        call public_5129f0
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], eax
        je public_5126d1
        add eax, 0x10
        push eax
        add edi, 4
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jl public_5126d1
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ecx
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_5126d1 : nop
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ecx
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x512660)
    }
}

#undef public_512699
#undef public_5126d1
