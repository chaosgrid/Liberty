#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f750);
CLANG_FORWARD_PROC_SYMBOL(public_6321eb0);

#define public_6321ec8 _public_6321ec8
#define public_6321ef7 _public_6321ef7
#define public_6321f04 _public_6321f04

PROC_DECLARE(0x6321eb0, internal_6321eb0, public_6321eb0);
extern "C" NAKED register_t __cdecl internal_6321eb0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        cmp dword ptr ds : [esi+4], ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6321ec8
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ds : [edi]
        je public_6321f04
        public_6321ec8 : nop
        push edi
        mov ecx, esi
        call public_627f750
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6321ef7
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6321ef7
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ecx
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        pop ecx
        ret 8
        public_6321ef7 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        public_6321f04 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6321eb0)
    }
}

#undef public_6321ec8
#undef public_6321ef7
#undef public_6321f04
