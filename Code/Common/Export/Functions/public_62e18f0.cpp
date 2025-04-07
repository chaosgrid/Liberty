#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e18f0);

#define public_62e19e6 _public_62e19e6
#define public_62e1a6d _public_62e1a6d
#define public_62e1a84 _public_62e1a84
#define public_62e1a8e _public_62e1a8e

PROC_DECLARE(0x62e18f0, internal_62e18f0, public_62e18f0);
extern "C" NAKED register_t __cdecl internal_62e18f0()
{
    __asm
    {
        sub esp, 0x30
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp]
        faddp 
        fadd st(0), st
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62e19e6
        mov eax, dword ptr ss : [esp+0x4C]
        fstp st(0)
        mov dword ptr ds : [eax], 0
        fstp st(0)
        mov al, 1
        add esp, 0x30
        ret 
        public_62e19e6 : nop
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fxch st(2)
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_63a05c0]
        fsubp st(2), st
        fxch 
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62e1a84
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 1
        jne public_62e1a84
        fld dword ptr ss : [esp+0x48]
        fsqrt 
        fld dword ptr ss : [esp+0x3C]
        fadd st(0), st
        fdivr dword ptr ds : [public_639a1d0]
        fld st(1)
        fsub dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        fchs 
        fsubrp st(2), st
        fxch 
        fmulp 
        fld dword ptr ss : [esp+0x3C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [esp+0x4C]
        je public_62e1a6d
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        public_62e1a6d : nop
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62e1a8e
        mov al, 1
        add esp, 0x30
        ret 
        public_62e1a84 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], 0xBF800000
        public_62e1a8e : nop
        xor al, al
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62e18f0)
    }
}

#undef public_62e19e6
#undef public_62e1a6d
#undef public_62e1a84
#undef public_62e1a8e
