#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x635e080, internal_635e080, public_635e080);
extern "C" NAKED register_t __cdecl internal_635e080()
{
    __asm
    {
        sub esp, 0x50
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, ecx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ds:[esi+0x24]
        push ecx
        mov ecx, edi
        call public_6348580
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ds:[esi+0x14]
        push eax
        mov ecx, edi
        call public_63484e0
        mov edi, dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ds:[esi+0x44]
        push edx
        mov ecx, edi
        call public_6348580
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0x34]
        push ecx
        mov ecx, edi
        call public_63484e0
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_628bed0
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        push ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsubp 
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fstp dword ptr ss : [esp]
        call public_6347df0
        fmul dword ptr ss : [esp+0x60]
        add esp, 4
        pop edi
        fmul dword ptr ds : [esi+0x54]
        pop esi
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x635e080)
    }
}
