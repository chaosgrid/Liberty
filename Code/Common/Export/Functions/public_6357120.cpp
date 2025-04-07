#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_6357120);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

#define public_635729f _public_635729f

PROC_DECLARE(0x6357120, internal_6357120, public_6357120);
extern "C" NAKED register_t __cdecl internal_6357120()
{
    __asm
    {
        sub esp, 0x24
        fld dword ptr ss : [esp+0x28]
        push esi
        fchs 
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x108]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        lea ecx, ss:[esp+8]
        fadd dword ptr ds : [esi+0xB8]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], eax
        fadd dword ptr ds : [esi+0xB4]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        call public_6347e90
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0xE4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0xE0]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0xDC]
        faddp 
        fabs 
        fst dword ptr ss : [esp+0x2C]
        call public_6391fce
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [public_63a5460]
        fsubr dword ptr ds : [public_63a53d0]
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ds : [public_63a5660]
        faddp 
        fstp st(1)
        fld dword ptr ds : [esi+0xD8]
        fld dword ptr ds : [esi+0x104]
        fld st(0)
        fmul st, st(1)
        fmul st, st(3)
        fmulp st(3), st
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_635729f
        fsqrt 
        fst dword ptr ss : [esp+0x2C]
        call public_6391fce
        mov eax, dword ptr ds : [esi+0x108]
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [public_63a5460]
        fsubr dword ptr ds : [public_63a53d0]
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ds : [public_63a5660]
        faddp 
        fchs 
        fstp st(1)
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0xB4]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [esi+0xB8]
        fstp dword ptr ds : [esi+0xBC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0xB4]
        fstp dword ptr ds : [esi+0xB4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0xB8]
        fstp dword ptr ds : [esi+0xB8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ds : [esi+0xBC]
        pop esi
        add esp, 0x24
        ret 4
        public_635729f : nop
        fstp st(0)
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6357120)
    }
}

#undef public_635729f
