#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552cd0);

#define public_552cec _public_552cec
#define public_552d08 _public_552d08
#define public_552d2d _public_552d2d

PROC_DECLARE(0x552cd0, internal_552cd0, public_552cd0);
extern "C" NAKED register_t __cdecl internal_552cd0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5debf8]
        fnstsw ax
        test ah, 0x41
        jne public_552cec
        mov dword ptr ds : [public_679940], 3
        ret 
        public_552cec : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_552d08
        mov dword ptr ds : [public_679940], 2
        ret 
        public_552d08 : nop
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [public_679940], 1
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 0x41
        je public_552d2d
        mov dword ptr ds : [public_679940], 0
        public_552d2d : nop
        ret 
        UNREACHABLE_TRAP(0x552cd0)
    }
}

#undef public_552cec
#undef public_552d08
#undef public_552d2d
