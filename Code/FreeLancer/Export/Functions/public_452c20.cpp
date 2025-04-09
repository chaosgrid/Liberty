#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452c20, internal_452c20, public_452c20);
extern "C" NAKED register_t __cdecl internal_452c20()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0x20]
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
        UNREACHABLE_TRAP(0x452c20)
    }
}
