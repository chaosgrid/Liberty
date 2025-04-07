#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4438d);

#define public_6d44390 _public_6d44390
#define public_6d443a9 _public_6d443a9
#define public_6d443cc _public_6d443cc
#define public_6d443ce _public_6d443ce
#define public_6d443e4 _public_6d443e4
#define public_6d443e6 _public_6d443e6
#define public_6d443fb _public_6d443fb
#define public_6d443ff _public_6d443ff
#define public_6d44402 _public_6d44402

PROC_DECLARE(0x6d4438d, internal_6d4438d, public_6d4438d);
extern "C" NAKED register_t __cdecl internal_6d4438d()
{
    __asm
    {
        push 0x10
        pop edx
        public_6d44390 : nop
        fldz 
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_6d443a9
        fldz 
        fstp dword ptr ds : [ecx]
        fldz 
        fstp dword ptr ds : [ecx+4]
        fldz 
        jmp public_6d443ff
        public_6d443a9 : nop
        fld1 
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_6d44402
        fld1 
        fdiv dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 5
        jp public_6d443cc
        fld st(0)
        fmul dword ptr ds : [ecx]
        jmp public_6d443ce
        public_6d443cc : nop
        fld1 
        public_6d443ce : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 5
        jp public_6d443e4
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        jmp public_6d443e6
        public_6d443e4 : nop
        fld1 
        public_6d443e6 : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 5
        jp public_6d443fb
        fmul dword ptr ds : [ecx+8]
        jmp public_6d443ff
        public_6d443fb : nop
        fstp st(0)
        fld1 
        public_6d443ff : nop
        fstp dword ptr ds : [ecx+8]
        public_6d44402 : nop
        add ecx, 0x10
        dec edx
        jne public_6d44390
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d4438d)
    }
}

#undef public_6d44390
#undef public_6d443a9
#undef public_6d443cc
#undef public_6d443ce
#undef public_6d443e4
#undef public_6d443e6
#undef public_6d443fb
#undef public_6d443ff
#undef public_6d44402
