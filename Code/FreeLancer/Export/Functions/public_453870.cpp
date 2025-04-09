#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453870, internal_453870, public_453870);
extern "C" NAKED register_t __cdecl internal_453870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x24
        push esi
        push edi
        lea ecx, ds:[eax+0x6C]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c627c]
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x453870)
    }
}
