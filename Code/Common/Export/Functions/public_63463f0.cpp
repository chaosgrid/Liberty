#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63463f0);

#define public_634645f _public_634645f
#define public_6346472 _public_6346472
#define public_6346488 _public_6346488

PROC_DECLARE(0x63463f0, internal_63463f0, public_63463f0);
extern "C" NAKED register_t __cdecl internal_63463f0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        fld st(0)
        fmulp 
        fld dword ptr ds : [eax+4]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        fld dword ptr ss : [esp]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x3C]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x34]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_634645f
        fstp st(0)
        fld dword ptr ss : [esp+8]
        public_634645f : nop
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6346472
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_6346472 : nop
        mov eax, dword ptr ds : [ecx]
        test ah, 3
        jne public_6346488
        fadd dword ptr ds : [ecx+0x40]
        fdivr dword ptr ds : [public_63a53d0]
        add esp, 0x14
        ret 4
        public_6346488 : nop
        fadd dword ptr ds : [public_63a53d0]
        fdivr dword ptr ds : [public_63a53d0]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x63463f0)
    }
}

#undef public_634645f
#undef public_6346472
#undef public_6346488
