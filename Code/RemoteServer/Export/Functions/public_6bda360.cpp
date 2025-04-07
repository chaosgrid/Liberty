#include "RemoteServer-PCH.h"


#define public_6bda3b7 _public_6bda3b7
#define public_6bda41d _public_6bda41d
#define public_6bda472 _public_6bda472
#define public_6bda4b7 _public_6bda4b7

PROC_DECLARE(0x6bda360, internal_6bda360, public_6bda360);
extern "C" NAKED register_t __cdecl internal_6bda360()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [edx]
        fadd dword ptr ds : [edx+0x20]
        fadd dword ptr ds : [public_6c0baa8]
        fcom dword ptr ds : [public_6c0bac8]
        fnstsw ax
        test ah, 0x41
        jne public_6bda3b7
        fsqrt 
        fdivr qword ptr ds : [public_6c0bac0]
        fld qword ptr ds : [public_6c0bab8]
        fdiv st, st(1)
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [edx+0x1C]
        fsub dword ptr ds : [edx+0x14]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [edx+0x18]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+0xC]
        fsub dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0xC]
        fstp st(0)
        ret 4
        public_6bda3b7 : nop
        fstp st(0)
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [edx+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6bda41d
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6bda4b7
        fld dword ptr ds : [edx]
        fadd qword ptr ds : [public_6c0bab0]
        fsub dword ptr ds : [edx+0x10]
        fsub dword ptr ds : [edx+0x20]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6c0baa8]
        fld dword ptr ds : [public_6c0baac]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+0x18]
        fadd dword ptr ds : [edx+8]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edx+0x1C]
        fadd dword ptr ds : [edx+0x14]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        ret 4
        public_6bda41d : nop
        fld dword ptr ds : [edx+0x10]
        fcomp dword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6bda472
        fld dword ptr ds : [edx+0x10]
        fadd qword ptr ds : [public_6c0bab0]
        fsub dword ptr ds : [edx]
        fsub dword ptr ds : [edx+0x20]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6c0baa8]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_6c0baac]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+0x1C]
        fadd dword ptr ds : [edx+0x14]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edx+0x18]
        fadd dword ptr ds : [edx+8]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        ret 4
        public_6bda472 : nop
        fld dword ptr ds : [edx+0x20]
        fadd qword ptr ds : [public_6c0bab0]
        fsub dword ptr ds : [edx]
        fsub dword ptr ds : [edx+0x10]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6c0baa8]
        fld dword ptr ds : [edx+0x18]
        fadd dword ptr ds : [edx+8]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0x1C]
        fadd dword ptr ds : [edx+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [public_6c0baac]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        public_6bda4b7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bda360)
    }
}

#undef public_6bda3b7
#undef public_6bda41d
#undef public_6bda472
#undef public_6bda4b7
