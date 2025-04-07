#include "x86math-PCH.h"


#define public_6f713d9 _public_6f713d9
#define public_6f713e6 _public_6f713e6

PROC_DECLARE(0x6f71380, internal_6f71380, public_6f71380);
extern "C" NAKED register_t __cdecl internal_6f71380()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fld st(0)
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld st(0)
        fabs 
        fld dword ptr ds : [public_6f73064]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f713d9
        fdivr dword ptr ds : [public_6f730f8]
        xor eax, eax
        jmp public_6f713e6
        public_6f713d9 : nop
        fstp st(0)
        fld dword ptr ds : [public_6f730f8]
        mov eax, 0xFFFFFFFE
        public_6f713e6 : nop
        mov edx, dword ptr ss : [esp+8]
        fxch 
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+0xC]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [edx+0x10]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+0x14]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [edx+0x18]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+0x1C]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [edx+0x20]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx+0x20]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x20]
        fsubp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+0x24]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x20]
        fsubp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0x2C]
        fsubp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [edx+0x28]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x24]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx]
        fsubp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fmul st, st(1)
        fchs 
        fstp dword ptr ds : [edx+0x2C]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0x10]
        fsubp 
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [ecx]
        fmul dword ptr ds : [ecx+0x14]
        fsubp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        fsubp 
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        ret 0x10
        UNREACHABLE_TRAP(0x6f71380)
    }
}

#undef public_6f713d9
#undef public_6f713e6
