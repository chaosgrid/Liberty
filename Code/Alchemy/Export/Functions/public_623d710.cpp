#include "Alchemy-PCH.h"


#define public_623d796 _public_623d796

PROC_DECLARE(0x623d710, internal_623d710, public_623d710);
extern "C" NAKED register_t __cdecl internal_623d710()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [edx+0x50]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [eax+0x54]
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
        jne public_623d796
        mov dword ptr ds : [esi+0xA4], 0x3F800000
        public_623d796 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x623d710)
    }
}

#undef public_623d796
