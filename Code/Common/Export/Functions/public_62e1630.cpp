#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1630);

#define public_62e1662 _public_62e1662
#define public_62e1677 _public_62e1677

PROC_DECLARE(0x62e1630, internal_62e1630, public_62e1630);
extern "C" NAKED register_t __cdecl internal_62e1630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e1662
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        ret 
        public_62e1662 : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e1677
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e1677 : nop
        ret 
        UNREACHABLE_TRAP(0x62e1630)
    }
}

#undef public_62e1662
#undef public_62e1677
