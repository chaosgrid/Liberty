#include "Common-PCH.h"

PROC_DECLARE(0x6293740, internal_6293740, public_6293740);
extern "C" NAKED register_t __cdecl internal_6293740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [esi+0x88]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6293740)
    }
}
