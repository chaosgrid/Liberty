#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

PROC_DECLARE(0x623e830, internal_623e830, public_623e830);
extern "C" NAKED register_t __cdecl internal_623e830()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp+8], offset public_6256d54
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+4], 0xC
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623e830)
    }
}
