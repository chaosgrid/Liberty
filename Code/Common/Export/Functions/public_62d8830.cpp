#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

PROC_DECLARE(0x62d8830, internal_62d8830, public_62d8830);
extern "C" NAKED register_t __cdecl internal_62d8830()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0x18
        mov dword ptr ds : [esi+0x8C], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8c20
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        mov dword ptr ds : [esi+0x50], 0
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d8830)
    }
}
