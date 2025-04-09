#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512620);

#define public_51263d _public_51263d
#define public_512650 _public_512650

PROC_DECLARE(0x512620, internal_512620, public_512620);
extern "C" NAKED register_t __cdecl internal_512620()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        mov dword ptr ss : [esp], 0
        je public_51263d
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp], edx
        public_51263d : nop
        fld dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_512650
        fstp st(0)
        fld dword ptr ss : [esp]
        public_512650 : nop
        fmul dword ptr ds : [ecx+8]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x512620)
    }
}

#undef public_51263d
#undef public_512650
