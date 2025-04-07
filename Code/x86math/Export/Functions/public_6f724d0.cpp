#include "x86math-PCH.h"


#define public_6f72540 _public_6f72540
#define public_6f72579 _public_6f72579

PROC_DECLARE(0x6f724d0, internal_6f724d0, public_6f724d0);
extern "C" NAKED register_t __cdecl internal_6f724d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [edx]
        faddp 
        fcomp dword ptr ds : [public_6f730fc]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ss : [esp+8]
        jp public_6f72540
        fld dword ptr ds : [ecx]
        fadd dword ptr ds : [edx]
        fmul dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [edx+8]
        fmul dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [ecx+0xC]
        fmul dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [ecx+0xC]
        jmp public_6f72579
        public_6f72540 : nop
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [ecx]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [edx+0xC]
        fsub dword ptr ds : [ecx+0xC]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+0xC]
        public_6f72579 : nop
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_6f730f8]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0xC]
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x6f724d0)
    }
}

#undef public_6f72540
#undef public_6f72579
