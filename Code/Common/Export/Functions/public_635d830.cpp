#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x635d830, internal_635d830, public_635d830);
extern "C" NAKED register_t __cdecl internal_635d830()
{
    __asm
    {
        sub esp, 0x50
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, edi
        call public_63484e0
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        mov ecx, edi
        call public_6348580
        mov edi, dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ds:[esi+0x34]
        push edx
        mov ecx, edi
        call public_63484e0
        lea eax, ss:[esp+8]
        push eax
        add esi, 0x44
        push esi
        mov ecx, edi
        call public_6348580
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x40]
        fld st(0)
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(3)
        fxch 
        fmul dword ptr ss : [esp+8]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fsubp 
        fstp st(1)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fld st(2)
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fxch 
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ss : [esp+8]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x20]
        call public_6347ef0
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x20]
        pop edi
        fld dword ptr ss : [esp+0x48]
        pop esi
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x635d830)
    }
}
