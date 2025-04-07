#include "Alchemy-PCH.h"


#define public_623667e _public_623667e

PROC_DECLARE(0x6236610, internal_6236610, public_6236610);
extern "C" NAKED register_t __cdecl internal_6236610()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0xB4]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xB8]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xBC]
        fsub dword ptr ds : [edi+8]
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fmul dword ptr ds : [esi+0xAC]
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_623667e
        mov dword ptr ss : [esp+0x24], 0x3F800000
        public_623667e : nop
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [eax+0x5C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [esi+0xA4]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xA8]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[edi+0xC]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6236610)
    }
}

#undef public_623667e
