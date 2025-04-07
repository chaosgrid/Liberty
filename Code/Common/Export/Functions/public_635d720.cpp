#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63484e0);

#define public_635d7a9 _public_635d7a9

PROC_DECLARE(0x635d720, internal_635d720, public_635d720);
extern "C" NAKED register_t __cdecl internal_635d720()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_63484e0
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+4]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        call public_63484e0
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x1C]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ds : [esi+0x38]
        fxch 
        fmul dword ptr ds : [esi+0x3C]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x34]
        pop esi
        faddp 
        fmul dword ptr ds : [public_63a5668]
        fld st(0)
        fabs 
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 1
        jne public_635d7a9
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fsqrt 
        public_635d7a9 : nop
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x635d720)
    }
}

#undef public_635d7a9
