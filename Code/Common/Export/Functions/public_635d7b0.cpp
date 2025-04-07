#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x635d7b0, internal_635d7b0, public_635d7b0);
extern "C" NAKED register_t __cdecl internal_635d7b0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        call public_63484e0
        mov edi, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+8]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        mov ecx, edi
        call public_63484e0
        lea ecx, ss:[esp+0x28]
        push ecx
        add esi, 0x34
        push esi
        mov ecx, edi
        call public_6348580
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        pop edi
        fld dword ptr ss : [esp+8]
        pop esi
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x20]
        faddp 
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x635d7b0)
    }
}
