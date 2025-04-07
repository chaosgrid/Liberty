#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209890, internal_6209890, public_6209890);
extern "C" NAKED register_t __cdecl internal_6209890()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi]
        push 4
        push esi
        call dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+4]
        push eax
        push 0
        push esi
        mov dword ptr ss : [esp+0x10], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x14], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x18], 0x3F4CCCCD
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6209890)
    }
}
