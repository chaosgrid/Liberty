#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207be0, internal_6207be0, public_6207be0);
extern "C" NAKED register_t __cdecl internal_6207be0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ss : [esp]
        mov dword ptr ss : [esp+4], 8
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6207be0)
    }
}
