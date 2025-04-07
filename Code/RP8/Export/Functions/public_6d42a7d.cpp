#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42a7d);

#define public_6d42aa6 _public_6d42aa6

PROC_DECLARE(0x6d42a7d, internal_6d42a7d, public_6d42a7d);
extern "C" NAKED register_t __cdecl internal_6d42a7d()
{
    __asm
    {
        fld qword ptr ss : [esp+8]
        fld qword ptr ss : [esp+0x10]
        fld st(1)
        fmul st, st(1)
        fsub qword ptr ds : [public_6d5e498]
        fabs 
        fcomp qword ptr ds : [public_6d60ed8]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [esp+4]
        jne public_6d42aa6
        or byte ptr ds : [eax+0x61], 0x20
        public_6d42aa6 : nop
        fstp dword ptr ds : [eax+0x130]
        fstp dword ptr ds : [eax+0x134]
        ret 
        UNREACHABLE_TRAP(0x6d42a7d)
    }
}

#undef public_6d42aa6
