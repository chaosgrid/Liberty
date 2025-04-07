#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427940);

#define public_427956 _public_427956
#define public_427980 _public_427980
#define public_4279ec _public_4279ec

PROC_DECLARE(0x427940, internal_427940, public_427940);
extern "C" NAKED register_t __cdecl internal_427940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_427956
        xor al, al
        ret 
        public_427956 : nop
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [public_5c7474]
        fst dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jp public_427980
        mov eax, dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], 0xBF800000
        fstp dword ptr ds : [eax]
        mov al, 1
        ret 
        public_427980 : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fsub st, st(1)
        fxch st(2)
        fadd dword ptr ss : [esp+0xC]
        fdivr dword ptr ss : [esp+0xC]
        fmulp st(2), st
        faddp 
        fcom dword ptr ds : [public_5c9cf0]
        fnstsw ax
        test ah, 0x41
        jp public_4279ec
        mov ecx, dword ptr ss : [esp+0x14]
        fstp st(0)
        mov dword ptr ds : [ecx], 0xC2C00000
        mov al, 1
        ret 
        public_4279ec : nop
        fldlg2 
        mov edx, dword ptr ss : [esp+0x14]
        fxch 
        mov al, 1
        fyl2x 
        fmul qword ptr ds : [public_5c9ce8]
        fstp dword ptr ds : [edx]
        ret 
        UNREACHABLE_TRAP(0x427940)
    }
}

#undef public_427956
#undef public_427980
#undef public_4279ec
