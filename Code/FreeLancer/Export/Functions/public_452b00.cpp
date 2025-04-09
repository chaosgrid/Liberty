#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452b00, internal_452b00, public_452b00);
extern "C" NAKED register_t __cdecl internal_452b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [public_5c6d58]
        sub esp, 0x24
        push esi
        mov esi, dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x30]
        push edi
        mov edi, dword ptr ds : [ecx]
        push edx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c6274]
        mov edx, dword ptr ds : [public_5c6d58]
        push eax
        mov eax, dword ptr ds : [edx]
        push esi
        push eax
        call dword ptr ds : [edi+0x50]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x452b00)
    }
}
