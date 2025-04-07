#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346a50);

#define public_6346ab4 _public_6346ab4
#define public_6346b08 _public_6346b08
#define public_6346b29 _public_6346b29
#define public_6346b41 _public_6346b41

PROC_DECLARE(0x6346a50, internal_6346a50, public_6346a50);
extern "C" NAKED register_t __cdecl internal_6346a50()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+4]
        fst dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a5460]
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        je public_6346ab4
        fsubr dword ptr ds : [public_63a53d0]
        fld dword ptr ds : [public_63a53d0]
        fsub dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_63a53d0]
        fsub dword ptr ss : [esp+8]
        jmp public_6346b08
        public_6346ab4 : nop
        fchs 
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fld dword ptr ss : [esp+4]
        fchs 
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fchs 
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        public_6346b08 : nop
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x2C]
        fcom dword ptr ds : [public_63a53fc]
        fnstsw ax
        test ah, 1
        je public_6346b29
        fsubr dword ptr ds : [public_63a53d0]
        jmp public_6346b41
        public_6346b29 : nop
        fchs 
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        public_6346b41 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+0x98]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+0x9C]
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        fxch st(2)
        fmul dword ptr ds : [ecx+0x94]
        mov dword ptr ds : [ecx+0x9C], eax
        fstp dword ptr ds : [ecx+0x94]
        fxch 
        fstp dword ptr ds : [ecx+0x98]
        fld st(0)
        fmul dword ptr ds : [ecx+0xA4]
        fstp dword ptr ds : [ecx+0xA4]
        fld st(0)
        fmul dword ptr ds : [ecx+0xA8]
        fstp dword ptr ds : [ecx+0xA8]
        fmul dword ptr ds : [ecx+0xAC]
        fstp dword ptr ds : [ecx+0xAC]
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6346a50)
    }
}

#undef public_6346ab4
#undef public_6346b08
#undef public_6346b29
#undef public_6346b41
