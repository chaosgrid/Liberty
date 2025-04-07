#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc060);

#define public_4cc098 _public_4cc098
#define public_4cc0b3 _public_4cc0b3
#define public_4cc0da _public_4cc0da
#define public_4cc12a _public_4cc12a

PROC_DECLARE(0x4cc060, internal_4cc060, public_4cc060);
extern "C" NAKED register_t __cdecl internal_4cc060()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d7478]
        fabs 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_4cc098
        fld dword ptr ds : [public_5c7474]
        pop ecx
        ret 0xC
        public_4cc098 : nop
        fld dword ptr ss : [esp]
        fcomp qword ptr ds : [public_5c7720]
        fnstsw ax
        test ah, 0x41
        jp public_4cc0b3
        fld dword ptr ds : [public_5c7474]
        pop ecx
        ret 0xC
        public_4cc0b3 : nop
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_4cc0da
        fchs 
        public_4cc0da : nop
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_610900]
        fchs 
        mov dword ptr ss : [esp+0xC], eax
        fxch 
        fpatan 
        fld dword ptr ds : [public_6108fc]
        fmul qword ptr ds : [public_5d7470]
        fxch 
        fxch 
        fmulp 
        fld st(0)
        fsin 
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0xC]
        fmul qword ptr ds : [public_5d5138]
        fstp dword ptr ss : [esp+8]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_4cc12a
        fstp st(0)
        fld dword ptr ss : [esp+8]
        public_4cc12a : nop
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_5ca320]
        fdivrp 
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x4cc060)
    }
}

#undef public_4cc098
#undef public_4cc0b3
#undef public_4cc0da
#undef public_4cc12a
