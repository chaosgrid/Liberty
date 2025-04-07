#include "x86math-PCH.h"


#define public_6f712d7 _public_6f712d7

PROC_DECLARE(0x6f711f0, internal_6f711f0, public_6f711f0);
extern "C" NAKED register_t __cdecl internal_6f711f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x14]
        fld st(0)
        fabs 
        fld dword ptr ds : [public_6f73064]
        fcompp 
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ss : [esp+0xC]
        jp public_6f712d7
        fdivr dword ptr ds : [public_6f730f8]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+0x1C]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0xC]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0xC]
        pop esi
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x20]
        xor eax, eax
        fstp st(0)
        ret 0xC
        public_6f712d7 : nop
        fstp st(0)
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+0x1C]
        fsubp 
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fchs 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fchs 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0x18]
        fsubp 
        fchs 
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0xC]
        fsubp 
        fchs 
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0xC]
        pop esi
        fsubp 
        fstp dword ptr ds : [eax+0x20]
        mov eax, 0xFFFFFFFE
        ret 0xC
        UNREACHABLE_TRAP(0x6f711f0)
    }
}

#undef public_6f712d7
