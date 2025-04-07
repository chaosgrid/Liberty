#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x635e160, internal_635e160, public_635e160);
extern "C" NAKED register_t __cdecl internal_635e160()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        call public_6348580
        mov ecx, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x14]
        push edx
        add esi, 0x24
        push esi
        call public_6348580
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0xC]
        call public_628bed0
        fld dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        pop esi
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fstp st(2)
        fstp st(0)
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x635e160)
    }
}
