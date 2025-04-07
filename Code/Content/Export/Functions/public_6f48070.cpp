#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48070);

PROC_DECLARE(0x6f48070, internal_6f48070, public_6f48070);
extern "C" NAKED register_t __cdecl internal_6f48070()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6fb35e0]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3494]
        fild dword ptr ss : [esp+0x1C]
        add esp, 0x10
        pop esi
        fadd dword ptr ss : [esp]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f48070)
    }
}
