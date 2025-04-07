#include "Common-PCH.h"

PROC_DECLARE(0x62ad190, internal_62ad190, public_62ad190);
extern "C" NAKED register_t __cdecl internal_62ad190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [esi+0xE4]
        push 0x18
        lea eax, ds:[esi+0xF0]
        push eax
        push ecx
        call dword ptr ds : [public_639927c]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        add esi, 0xF8
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edx+8]
        add esp, 0xC
        mov dword ptr ds : [esi+8], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62ad190)
    }
}
