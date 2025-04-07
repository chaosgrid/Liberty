#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6384060);

#define public_6384073 _public_6384073
#define public_6384085 _public_6384085
#define public_638409b _public_638409b
#define public_63840a2 _public_63840a2

PROC_DECLARE(0x6384060, internal_6384060, public_6384060);
extern "C" NAKED register_t __cdecl internal_6384060()
{
    __asm
    {
        fld qword ptr ds : [public_63a58b0]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov eax, esi
        jg public_6384073
        neg eax
        public_6384073 : nop
        mov ecx, eax
        dec eax
        test ecx, ecx
        je public_638409b
        mov ecx, dword ptr ss : [esp+8]
        lea edx, ds:[eax+1]
        mov eax, dword ptr ss : [esp+0xC]
        public_6384085 : nop
        fld qword ptr ds : [ecx]
        add eax, 8
        fsub qword ptr ds : [eax-8]
        add ecx, 8
        dec edx
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jne public_6384085
        public_638409b : nop
        test esi, esi
        pop esi
        jle public_63840a2
        fsqrt 
        public_63840a2 : nop
        ret 
        UNREACHABLE_TRAP(0x6384060)
    }
}

#undef public_6384073
#undef public_6384085
#undef public_638409b
#undef public_63840a2
