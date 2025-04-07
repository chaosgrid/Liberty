#include "FLServer-PCH.h"

PROC_DECLARE(0x410480, internal_410480, public_410480);
extern "C" NAKED register_t __cdecl internal_410480()
{
    __asm
    {
        sub esp, 0x400
        push esi
        lea eax, ss:[esp+4]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x408]
        push eax
        push ecx
        call dword ptr ds : [public_41b090]
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 8
        lea edx, ss:[esp+4]
        push edx
        push 0
        push 0x18C
        push eax
        call dword ptr ds : [public_41bbe8]
        pop esi
        add esp, 0x400
        ret 4
        UNREACHABLE_TRAP(0x410480)
    }
}
