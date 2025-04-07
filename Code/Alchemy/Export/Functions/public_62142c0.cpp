#include "Alchemy-PCH.h"


#define public_6214346 _public_6214346

PROC_DECLARE(0x62142c0, internal_62142c0, public_62142c0);
extern "C" NAKED register_t __cdecl internal_62142c0()
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
        fstp dword ptr ds : [esi+0xA4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0xA0]
        fmul dword ptr ds : [public_624ca50]
        fst dword ptr ds : [esi+0xA8]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_6214346
        mov dword ptr ds : [esi+0xA8], 0x3F800000
        public_6214346 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62142c0)
    }
}

#undef public_6214346
