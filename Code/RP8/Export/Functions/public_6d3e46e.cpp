#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3e509 _public_6d3e509
#define public_6d3e519 _public_6d3e519
#define public_6d3e51c _public_6d3e51c

PROC_DECLARE(0x6d3e46e, internal_6d3e46e, public_6d3e46e);
extern "C" NAKED register_t __cdecl internal_6d3e46e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        fld dword ptr ds : [edx+8]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx]
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
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6d5f8f0]
        fnstsw ax
        test ah, 0x41
        jne public_6d3e509
        fld dword ptr ds : [edx]
        push ecx
        fchs 
        push ecx
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [edx+4]
        fchs 
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+8]
        fchs 
        fstp dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0xC]
        fld1 
        mov dword ptr ds : [ecx+0xC], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        jne public_6d3e51c
        fld1 
        fdiv dword ptr ss : [ebp+0xC]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0xC]
        jmp public_6d3e519
        public_6d3e509 : nop
        fldz 
        fstp dword ptr ds : [ecx]
        fldz 
        fstp dword ptr ds : [ecx+4]
        fldz 
        fstp dword ptr ds : [ecx+8]
        fldz 
        public_6d3e519 : nop
        fstp dword ptr ds : [ecx+0xC]
        public_6d3e51c : nop
        mov eax, ecx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d3e46e)
    }
}

#undef public_6d3e509
#undef public_6d3e519
#undef public_6d3e51c
