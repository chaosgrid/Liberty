#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623dfa0);

#define public_623e02a _public_623e02a

PROC_DECLARE(0x623dfa0, internal_623dfa0, public_623dfa0);
extern "C" NAKED register_t __cdecl internal_623dfa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+0x44]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ds : [esi+0x9C]
        fstp dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [edx+0x54]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fstp dword ptr ds : [esi+0xA8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0xA0]
        fmul dword ptr ds : [public_624ca50]
        fst dword ptr ds : [esi+0xA4]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_623e02a
        mov dword ptr ds : [esi+0xA4], 0x3F800000
        public_623e02a : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x623dfa0)
    }
}

#undef public_623e02a
