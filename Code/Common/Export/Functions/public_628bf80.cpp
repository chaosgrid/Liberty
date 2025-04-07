#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bf80);

#define public_628c025 _public_628c025
#define public_628c03a _public_628c03a
#define public_628c040 _public_628c040

PROC_DECLARE(0x628bf80, internal_628bf80, public_628bf80);
extern "C" NAKED register_t __cdecl internal_628bf80()
{
    __asm
    {
        sub esp, 0x20
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fxch 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fxch 
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fst dword ptr ss : [esp+8]
        fmulp st(2), st
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x28]
        faddp st(2), st
        fld dword ptr ss : [esp]
        fmul st, st(1)
        faddp st(2), st
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fdivp st(2), st
        fxch 
        fchs 
        fcom dword ptr ds : [public_6399408]
        fstp st(1)
        fnstsw ax
        test ah, 5
        jnp public_628c025
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_628c040
        public_628c025 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_628c03a
        fld dword ptr ds : [public_6399408]
        jmp public_628c040
        public_628c03a : nop
        fld dword ptr ds : [public_639a1d0]
        public_628c040 : nop
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fadd dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], ecx
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+8], edx
        fstp st(0)
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x628bf80)
    }
}

#undef public_628c025
#undef public_628c03a
#undef public_628c040
