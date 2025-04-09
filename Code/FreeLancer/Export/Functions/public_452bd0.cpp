#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452bd0, internal_452bd0, public_452bd0);
extern "C" NAKED register_t __cdecl internal_452bd0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        push eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c6278]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x452bd0)
    }
}
