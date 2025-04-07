#include "Common-PCH.h"


#define public_6304335 _public_6304335
#define public_6304339 _public_6304339
#define public_6304352 _public_6304352
#define public_630435a _public_630435a
#define public_6304378 _public_6304378
#define public_6304392 _public_6304392

PROC_DECLARE(0x6304320, internal_6304320, public_6304320);
extern "C" NAKED register_t __cdecl internal_6304320()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6304335
        fld dword ptr ss : [esp+8]
        jmp public_6304339
        public_6304335 : nop
        fld dword ptr ss : [esp+0xC]
        public_6304339 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_6304352
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], eax
        jmp public_630435a
        public_6304352 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], ecx
        public_630435a : nop
        fld dword ptr ss : [esp+8]
        fsub st, st(1)
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6304378
        fld st(0)
        fmul st, st(1)
        fmulp 
        fmul dword ptr ds : [public_63a2718]
        ret 
        public_6304378 : nop
        fld dword ptr ss : [esp+8]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_6304392
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        ret 
        public_6304392 : nop
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fadd st, st(2)
        fsub st, st(1)
        fld dword ptr ss : [esp+4]
        fadd st(0), st
        fdivp 
        fld dword ptr ss : [esp+4]
        fsub st, st(1)
        fxch st(2)
        fmul dword ptr ss : [esp+8]
        fxch st(3)
        fmul st, st(4)
        faddp st(3), st
        fxch st(2)
        fmul dword ptr ds : [public_63a271c]
        fld st(1)
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld st(3)
        fmul st, st(5)
        fmul st, st(5)
        faddp 
        fld st(3)
        fmul st, st(4)
        fmul st, st(4)
        fmul dword ptr ds : [public_639f520]
        fsubp 
        fld st(2)
        fmul st, st(3)
        fmul st, st(3)
        fmul dword ptr ds : [public_639f520]
        fsubp 
        fmul dword ptr ds : [public_639d208]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6304320)
    }
}

#undef public_6304335
#undef public_6304339
#undef public_6304352
#undef public_630435a
#undef public_6304378
#undef public_6304392
