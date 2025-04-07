#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1410);

#define public_62e1495 _public_62e1495
#define public_62e14c4 _public_62e14c4
#define public_62e14f4 _public_62e14f4

PROC_DECLARE(0x62e1410, internal_62e1410, public_62e1410);
extern "C" NAKED register_t __cdecl internal_62e1410()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0xC]
        fld st(0)
        fmul dword ptr ds : [ecx+0x18]
        fld st(2)
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld st(3)
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jnp public_62e14c4
        fld dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_62e1495
        fxch st(2)
        fsub dword ptr ds : [ecx+0x10]
        fxch st(2)
        fxch 
        fsub dword ptr ds : [ecx+0x14]
        fxch 
        fsub dword ptr ds : [ecx+0x18]
        jmp public_62e14c4
        public_62e1495 : nop
        fld dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x10]
        fld st(0)
        fmul dword ptr ds : [ecx+0x10]
        fstp dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x18]
        fxch st(3)
        fsub dword ptr ss : [esp]
        fxch st(3)
        fxch st(2)
        fsub dword ptr ss : [esp+4]
        fxch st(2)
        fsubp 
        public_62e14c4 : nop
        fld dword ptr ds : [ecx]
        fld st(1)
        fmul st, st(2)
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_62e14f4
        mov eax, 1
        add esp, 0xC
        ret 
        public_62e14f4 : nop
        xor eax, eax
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e1410)
    }
}

#undef public_62e1495
#undef public_62e14c4
#undef public_62e14f4
