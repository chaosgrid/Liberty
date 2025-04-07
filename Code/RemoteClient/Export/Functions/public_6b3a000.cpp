#include "RemoteClient-PCH.h"


#define public_6b3a057 _public_6b3a057
#define public_6b3a0bd _public_6b3a0bd
#define public_6b3a112 _public_6b3a112
#define public_6b3a157 _public_6b3a157

PROC_DECLARE(0x6b3a000, internal_6b3a000, public_6b3a000);
extern "C" NAKED register_t __cdecl internal_6b3a000()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [edx]
        fadd dword ptr ds : [edx+0x20]
        fadd dword ptr ds : [public_6b6bf04]
        fcom dword ptr ds : [public_6b6bf28]
        fnstsw ax
        test ah, 0x41
        jne public_6b3a057
        fsqrt 
        fdivr qword ptr ds : [public_6b6bf20]
        fld qword ptr ds : [public_6b6bf18]
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
        public_6b3a057 : nop
        fstp st(0)
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [edx+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6b3a0bd
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6b3a157
        fld dword ptr ds : [edx]
        fadd qword ptr ds : [public_6b6bf10]
        fsub dword ptr ds : [edx+0x10]
        fsub dword ptr ds : [edx+0x20]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6b6bf04]
        fld dword ptr ds : [public_6b6bf08]
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
        public_6b3a0bd : nop
        fld dword ptr ds : [edx+0x10]
        fcomp dword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6b3a112
        fld dword ptr ds : [edx+0x10]
        fadd qword ptr ds : [public_6b6bf10]
        fsub dword ptr ds : [edx]
        fsub dword ptr ds : [edx+0x20]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6b6bf04]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_6b6bf08]
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
        public_6b3a112 : nop
        fld dword ptr ds : [edx+0x20]
        fadd qword ptr ds : [public_6b6bf10]
        fsub dword ptr ds : [edx]
        fsub dword ptr ds : [edx+0x10]
        fsqrt 
        fadd st(0), st
        fdivr dword ptr ds : [public_6b6bf04]
        fld dword ptr ds : [edx+0x18]
        fadd dword ptr ds : [edx+8]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0x1C]
        fadd dword ptr ds : [edx+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fld dword ptr ds : [public_6b6bf08]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edx+0xC]
        fadd dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fstp st(0)
        public_6b3a157 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3a000)
    }
}

#undef public_6b3a057
#undef public_6b3a0bd
#undef public_6b3a112
#undef public_6b3a157
