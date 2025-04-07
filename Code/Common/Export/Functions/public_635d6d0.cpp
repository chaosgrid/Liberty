#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x635d6d0, internal_635d6d0, public_635d6d0);
extern "C" NAKED register_t __cdecl internal_635d6d0()
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
        call public_6348580
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+4]
        push edx
        add esi, 0x24
        push esi
        call public_6348580
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        pop esi
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x635d6d0)
    }
}
