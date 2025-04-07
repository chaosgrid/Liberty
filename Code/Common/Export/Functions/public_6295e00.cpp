#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295e00);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

PROC_DECLARE(0x6295e00, internal_6295e00, public_6295e00);
extern "C" NAKED register_t __cdecl internal_6295e00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x100
        lea eax, ss:[esp+0x10C]
        push eax
        push ecx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_63991f4]
        lea eax, ss:[esp+0xC]
        push 0
        push eax
        call public_6333ca0
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [ecx], eax
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6295e00)
    }
}
