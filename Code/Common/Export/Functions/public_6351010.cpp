#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6351010);

#define public_6351067 _public_6351067
#define public_63510b6 _public_63510b6

PROC_DECLARE(0x6351010, internal_6351010, public_6351010);
extern "C" NAKED register_t __cdecl internal_6351010()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [public_63a53d0]
        fsub dword ptr ss : [esp]
        fabs 
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 0x41
        jne public_63510b6
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [public_63a5460]
        fsubr dword ptr ds : [public_63a562c]
        public_6351067 : nop
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ss : [esp]
        fsubr dword ptr ds : [public_63a53d0]
        fmul dword ptr ds : [public_63a5460]
        faddp 
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ss : [esp]
        fsubr dword ptr ds : [public_63a53d0]
        fabs 
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 0x41
        je public_6351067
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [ecx+0xC]
        public_63510b6 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6351010)
    }
}

#undef public_6351067
#undef public_63510b6
