#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4176c0);

#define public_4176de _public_4176de

PROC_DECLARE(0x4176c0, internal_4176c0, public_4176c0);
extern "C" NAKED register_t __cdecl internal_4176c0()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        sub esp, 8
        fabs 
        fcom qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jp public_4176de
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4176de : nop
        fdivr dword ptr ds : [public_67dc9c]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ds : [public_67dc9c]
        fld dword ptr ds : [public_67dc70]
        fmul st, st(1)
        fmul st, st(2)
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp]
        fmul dword ptr ds : [public_67dc74]
        fmul st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fstp st(0)
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4176c0)
    }
}

#undef public_4176de
