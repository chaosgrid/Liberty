#include "Server-PCH.h"


#define public_6d0505b _public_6d0505b

PROC_DECLARE(0x6d04fb0, internal_6d04fb0, public_6d04fb0);
extern "C" NAKED register_t __cdecl internal_6d04fb0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_6d64018]
        add esp, 4
        test eax, eax
        je public_6d0505b
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_6d0505b
        mov edx, dword ptr ds : [esi-0x60]
        lea ecx, ds:[esi-0x60]
        call dword ptr ds : [edx]
        fld dword ptr ds : [edi+0x2C]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x30]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+0x34]
        fsub dword ptr ds : [eax+8]
        lea eax, ds:[esi+0xC]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_6d65520]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+8]
        inc eax
        mov dword ptr ds : [esi+8], eax
        public_6d0505b : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d04fb0)
    }
}

#undef public_6d0505b
