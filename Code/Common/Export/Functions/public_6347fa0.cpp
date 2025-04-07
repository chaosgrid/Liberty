#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347fa0);

#define public_6347fd6 _public_6347fd6
#define public_6347fe7 _public_6347fe7
#define public_6348038 _public_6348038

PROC_DECLARE(0x6347fa0, internal_6347fa0, public_6347fa0);
extern "C" NAKED register_t __cdecl internal_6347fa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx]
        fabs 
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_6347fe7
        mov dword ptr ds : [ecx], 0
        fld dword ptr ds : [edx+4]
        fabs 
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_6347fd6
        mov dword ptr ds : [ecx], 0xBF800000
        ret 4
        public_6347fd6 : nop
        fld dword ptr ds : [edx+8]
        fdiv dword ptr ds : [edx+4]
        fchs 
        fst dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+4]
        ret 4
        public_6347fe7 : nop
        fld dword ptr ds : [edx+4]
        fld st(0)
        fmulp 
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [edx]
        fmul dword ptr ds : [public_63a546c]
        fsubp 
        fst dword ptr ss : [esp+4]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6348038
        fld dword ptr ds : [public_63a5460]
        fdiv dword ptr ds : [edx]
        fld dword ptr ss : [esp+4]
        fsqrt 
        fst dword ptr ss : [esp+4]
        fsub dword ptr ds : [edx+4]
        fmul st, st(1)
        fld dword ptr ds : [edx+4]
        fchs 
        fsub dword ptr ss : [esp+4]
        fmul st, st(2)
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        public_6348038 : nop
        ret 4
        UNREACHABLE_TRAP(0x6347fa0)
    }
}

#undef public_6347fd6
#undef public_6347fe7
#undef public_6348038
