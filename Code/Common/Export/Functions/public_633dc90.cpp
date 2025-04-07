#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633dc90);

#define public_633dcff _public_633dcff

PROC_DECLARE(0x633dc90, internal_633dc90, public_633dc90);
extern "C" NAKED register_t __cdecl internal_633dc90()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0xC]
        fld st(0)
        fmulp 
        fld dword ptr ds : [ecx+0x34]
        fld st(0)
        fmulp 
        fld dword ptr ds : [ecx+0x38]
        fld st(0)
        fmulp 
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fmul st, st(4)
        fmul st, st(5)
        fld st(2)
        fmul st, st(3)
        fmul st, st(6)
        fmul st, st(7)
        faddp 
        fld st(3)
        fmul st, st(4)
        fmul st, st(5)
        fmul st, st(7)
        faddp 
        fstp qword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fmul st, st(1)
        fmulp st(2), st
        fxch 
        fmul qword ptr ss : [esp]
        fcom qword ptr ds : [public_639c2b8]
        fstp st(1)
        fnstsw ax
        test ah, 0x41
        jne public_633dcff
        fsqrt 
        fdiv qword ptr ss : [esp]
        add esp, 8
        ret 4
        public_633dcff : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x633dc90)
    }
}

#undef public_633dcff
