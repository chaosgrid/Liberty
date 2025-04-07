#include "RP8-PCH.h"


#define public_6d3e6b0 _public_6d3e6b0
#define public_6d3e6b7 _public_6d3e6b7
#define public_6d3e70c _public_6d3e70c
#define public_6d3e711 _public_6d3e711

PROC_DECLARE(0x6d3e671, internal_6d3e671, public_6d3e671);
extern "C" NAKED register_t __cdecl internal_6d3e671()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        fld1 
        fsub dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 1
        jne public_6d3e6b0
        fld1 
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6d3e6b7
        public_6d3e6b0 : nop
        mov dword ptr ss : [ebp+0xC], 0xBF800000
        public_6d3e6b7 : nop
        fld dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fst dword ptr ss : [ebp+0x10]
        fstp st(1)
        fld1 
        fsub st, st(1)
        fcomp dword ptr ds : [public_6d5f8dc]
        fnstsw ax
        test ah, 0x41
        jne public_6d3e70c
        fld st(0)
        fmul st, st(1)
        fsubr dword ptr ds : [public_6d5e488]
        fsqrt 
        fstp st(1)
        fld st(0)
        fld dword ptr ss : [ebp+0x10]
        fpatan 
        fstp dword ptr ss : [ebp+0x10]
        fld1 
        fdiv st, st(1)
        fstp dword ptr ss : [ebp-4]
        fstp st(0)
        fld dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fsin 
        fstp st(1)
        fmul dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ss : [ebp+0x14]
        fsin 
        fmul dword ptr ss : [ebp-4]
        jmp public_6d3e711
        public_6d3e70c : nop
        fstp st(0)
        fld dword ptr ss : [ebp+0x14]
        public_6d3e711 : nop
        fmul dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        fld st(1)
        fmul dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [edx]
        faddp 
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fld st(2)
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [edx+8]
        fld st(2)
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+0xC]
        fld st(1)
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ds : [eax+0xC]
        fstp st(0)
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d3e671)
    }
}

#undef public_6d3e6b0
#undef public_6d3e6b7
#undef public_6d3e70c
#undef public_6d3e711
