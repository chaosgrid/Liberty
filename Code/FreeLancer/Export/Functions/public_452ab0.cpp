#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452ab0, internal_452ab0, public_452ab0);
extern "C" NAKED register_t __cdecl internal_452ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [public_5c6d58]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ds : [ecx]
        push edx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c6270]
        mov edx, dword ptr ds : [public_5c6d58]
        push eax
        mov eax, dword ptr ds : [edx]
        push esi
        push eax
        call dword ptr ds : [edi+0x4C]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x452ab0)
    }
}
