#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3eeb5 _public_6d3eeb5

PROC_DECLARE(0x6d3edfa, internal_6d3edfa, public_6d3edfa);
extern "C" NAKED register_t __cdecl internal_6d3edfa()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [edx+0xC]
        fxch st(3)
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x18]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x14]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+0x1C]
        fxch st(3)
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0x20]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0x28]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0x24]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0x2C]
        fxch st(3)
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        faddp st(4), st
        fld dword ptr ds : [edx+0x30]
        faddp 
        fld dword ptr ds : [edx+0x34]
        faddp st(2), st
        fld dword ptr ds : [edx+0x38]
        faddp st(3), st
        fld dword ptr ds : [edx+0x3C]
        faddp st(4), st
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-4]
        fld1 
        push ecx
        push ecx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp-4]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3eeb5
        fld1 
        fdiv dword ptr ss : [ebp-4]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        public_6d3eeb5 : nop
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3edfa)
    }
}

#undef public_6d3eeb5
