#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63038b0);

#define public_6303924 _public_6303924
#define public_630393a _public_630393a
#define public_630396a _public_630396a
#define public_6303970 _public_6303970

PROC_DECLARE(0x63038b0, internal_63038b0, public_63038b0);
extern "C" NAKED register_t __cdecl internal_63038b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+8]
        sub esp, 0x24
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
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 0x41
        jne public_6303924
        fdivr qword ptr ds : [public_63a03f0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fld st(0)
        mov dword ptr ss : [esp+0xC], eax
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_630393a
        public_6303924 : nop
        fstp st(0)
        mov dword ptr ss : [esp+0x14], 0
        fld dword ptr ds : [public_639a1d0]
        fld dword ptr ds : [public_6399408]
        public_630393a : nop
        fld st(1)
        fabs 
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jp public_630396a
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jp public_630396a
        fld dword ptr ds : [public_639a1d0]
        fld dword ptr ds : [public_6399408]
        jmp public_6303970
        public_630396a : nop
        fld st(0)
        fld st(2)
        fchs 
        public_6303970 : nop
        fld st(2)
        fmul dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x18], eax
        fld st(4)
        mov eax, dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6399408]
        fsubp 
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fmul st, st(3)
        mov dword ptr ss : [esp+0x1C], ecx
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x20], edx
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x1C], ecx
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(4)
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul st, st(5)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(4)
        fsubp 
        fld st(3)
        fmul st, st(5)
        fld st(3)
        fmul st, st(7)
        fsubp 
        fxch st(2)
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0x18]
        fxch 
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+0x10]
        fxch 
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x14]
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x63038b0)
    }
}

#undef public_6303924
#undef public_630393a
#undef public_630396a
#undef public_6303970
