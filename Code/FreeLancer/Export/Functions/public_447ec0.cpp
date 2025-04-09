#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447ec0);

PROC_DECLARE(0x447ec0, internal_447ec0, public_447ec0);
extern "C" NAKED register_t __cdecl internal_447ec0()
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
        call dword ptr ds : [public_5c70a8]
        lea eax, ss:[esp+0xC]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [ecx], eax
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x447ec0)
    }
}
