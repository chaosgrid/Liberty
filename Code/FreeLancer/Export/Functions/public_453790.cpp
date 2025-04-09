#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453790, internal_453790, public_453790);
extern "C" NAKED register_t __cdecl internal_453790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x24
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[edi+0x20]
        call dword ptr ds : [public_5c6274]
        add edi, 0x6C
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x453790)
    }
}
