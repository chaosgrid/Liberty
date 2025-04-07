#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236d90);

#define public_6236e02 _public_6236e02

PROC_DECLARE(0x6236d90, internal_6236d90, public_6236d90);
extern "C" NAKED register_t __cdecl internal_6236d90()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0xB8]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xBC]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xC0]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fmul dword ptr ds : [esi+0xB0]
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_6236e02
        mov dword ptr ss : [esp+0x24], 0x3F800000
        public_6236e02 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ds : [esi+0x90]
        mov eax, dword ptr ds : [eax+0x5C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [esi+0xA8]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xAC]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0xC]
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
        UNREACHABLE_TRAP(0x6236d90)
    }
}

#undef public_6236e02
