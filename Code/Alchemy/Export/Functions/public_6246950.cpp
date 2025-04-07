#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246950);

#define public_6246965 _public_6246965
#define public_624697a _public_624697a
#define public_6246998 _public_6246998

PROC_DECLARE(0x6246950, internal_6246950, public_6246950);
extern "C" NAKED register_t __cdecl internal_6246950()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_6246965
        fld dword ptr ds : [ecx]
        ret 
        public_6246965 : nop
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_624697a
        fld dword ptr ds : [edx]
        ret 
        public_624697a : nop
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ecx+4]
        cmp dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0xC]
        jne public_6246998
        fstp st(0)
        fld dword ptr ds : [ecx]
        ret 
        public_6246998 : nop
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(0)
        fadd st, st(1)
        fld st(2)
        fmul dword ptr ds : [public_624bb14]
        fld st(3)
        fadd st(0), st
        fsubr st, st(3)
        fadd dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fmul st, st(5)
        fxch st(3)
        fsub st, st(4)
        fmul dword ptr ds : [edx+8]
        fmul st, st(5)
        faddp st(3), st
        fld st(1)
        fsub st, st(1)
        fadd dword ptr ds : [public_624bac4]
        fmul dword ptr ds : [ecx]
        faddp st(3), st
        fsub st, st(1)
        fmul dword ptr ds : [edx]
        faddp st(2), st
        fxch 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6246950)
    }
}

#undef public_6246965
#undef public_624697a
#undef public_6246998
