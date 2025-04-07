#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

PROC_DECLARE(0x635da20, internal_635da20, public_635da20);
extern "C" NAKED register_t __cdecl internal_635da20()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        call public_6348580
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+4]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6366010
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0x1C]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x14]
        pop esi
        faddp 
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x635da20)
    }
}
