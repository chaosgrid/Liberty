#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298f40);

#define public_629900b _public_629900b
#define public_629904b _public_629904b
#define public_6299069 _public_6299069
#define public_6299076 _public_6299076
#define public_629907a _public_629907a

PROC_DECLARE(0x6298f40, internal_6298f40, public_6298f40);
extern "C" NAKED register_t __cdecl internal_6298f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        xor dl, dl
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [ecx+8]
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
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(3)
        fmul st, st(4)
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6299076
        fsqrt 
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+0xC]
        fld st(1)
        fsub st, st(3)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fxch st(2)
        fchs 
        fsub st, st(1)
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fstp st(1)
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_629900b
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_629907a
        public_629900b : nop
        fld dword ptr ss : [esp+0xC]
        mov cl, 1
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_629904b
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_629904b
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_6299069
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        mov al, cl
        ret 
        public_629904b : nop
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_6299069
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        mov al, cl
        ret 
        public_6299069 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        mov al, cl
        ret 
        public_6299076 : nop
        fstp st(0)
        fstp st(0)
        public_629907a : nop
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x6298f40)
    }
}

#undef public_629900b
#undef public_629904b
#undef public_6299069
#undef public_6299076
#undef public_629907a
