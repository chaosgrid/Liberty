#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63829d0);

#define public_6382a01 _public_6382a01
#define public_6382a14 _public_6382a14
#define public_6382a34 _public_6382a34
#define public_6382a69 _public_6382a69
#define public_6382a6b _public_6382a6b

PROC_DECLARE(0x63829d0, internal_63829d0, public_63829d0);
extern "C" NAKED register_t __cdecl internal_63829d0()
{
    __asm
    {
        fld qword ptr ss : [esp+4]
        fcom qword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_6382a34
        fld qword ptr ss : [esp+0x14]
        fchs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6382a34
        fcom qword ptr ds : [public_63a58b0]
        fld st(0)
        fnstsw ax
        test ah, 1
        je public_6382a01
        fchs 
        public_6382a01 : nop
        fld qword ptr ss : [esp+0xC]
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_6382a14
        fchs 
        public_6382a14 : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_6382a6b
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld qword ptr ds : [public_63a58b0]
        mov dword ptr ds : [ecx], 1
        ret 
        public_6382a34 : nop
        fld qword ptr ss : [esp+0xC]
        fdiv st, st(1)
        fcom qword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        je public_6382a69
        fld qword ptr ss : [esp+0x14]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6382a6b
        mov edx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld qword ptr ds : [public_63a58b0]
        mov dword ptr ds : [edx], 1
        ret 
        public_6382a69 : nop
        fstp st(0)
        public_6382a6b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        fdiv qword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x63829d0)
    }
}

#undef public_6382a01
#undef public_6382a14
#undef public_6382a34
#undef public_6382a69
#undef public_6382a6b
