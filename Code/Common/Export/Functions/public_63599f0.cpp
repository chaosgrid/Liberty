#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_63599f0);

#define public_6359a6a _public_6359a6a
#define public_6359a78 _public_6359a78

PROC_DECLARE(0x63599f0, internal_63599f0, public_63599f0);
extern "C" NAKED register_t __cdecl internal_63599f0()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [edi]
        mov esi, ecx
        lea ecx, ss:[esp+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x10]
        call public_6347e90
        fstp dword ptr ds : [esi+0x58]
        fld dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+0x34]
        fld st(0)
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        fst dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], eax
        fld st(1)
        fmul st, st(2)
        fcomp dword ptr ds : [public_63a53fc]
        fnstsw ax
        test ah, 1
        je public_6359a6a
        fld dword ptr ds : [public_63a53d0]
        mov dword ptr ss : [esp+0x20], 0
        jmp public_6359a78
        public_6359a6a : nop
        fld dword ptr ds : [public_63a53d4]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        public_6359a78 : nop
        fld dword ptr ss : [esp+0x30]
        lea ecx, ds:[esi+0x78]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fmul st, st(1)
        fxch st(2)
        fmul dword ptr ss : [esp+0x20]
        fsubp st(2), st
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ds : [ecx+8]
        call public_6347ef0
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x20]
        mov edx, ecx
        pop edi
        fstp dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x28], edx
        mov dword ptr ss : [esp+0x2C], ecx
        pop esi
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x63599f0)
    }
}

#undef public_6359a6a
#undef public_6359a78
