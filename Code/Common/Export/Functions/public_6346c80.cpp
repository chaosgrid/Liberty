#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346c80);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

PROC_DECLARE(0x6346c80, internal_6346c80, public_6346c80);
extern "C" NAKED register_t __cdecl internal_6346c80()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        lea ecx, ds:[esi+0xF4]
        call public_6366010
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x34]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x74]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x78]
        fstp dword ptr ds : [esi+0x78]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x7C]
        fstp dword ptr ds : [esi+0x7C]
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6346c80)
    }
}
