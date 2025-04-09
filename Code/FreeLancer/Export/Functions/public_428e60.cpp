#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428e60);

#define public_428e87 _public_428e87

PROC_DECLARE(0x428e60, internal_428e60, public_428e60);
extern "C" NAKED register_t __cdecl internal_428e60()
{
    __asm
    {
        fld dword ptr ds : [public_5ca16c]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca168]
        fnstsw ax
        test ah, 0x41
        jne public_428e87
        fstp st(0)
        fldln2 
        fld dword ptr ss : [esp+4]
        fyl2x 
        fmul qword ptr ds : [public_5ca160]
        public_428e87 : nop
        fstp dword ptr ds : [public_667c80]
        ret 
        UNREACHABLE_TRAP(0x428e60)
    }
}

#undef public_428e87
