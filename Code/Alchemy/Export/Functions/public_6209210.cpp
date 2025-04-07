#include "Alchemy-PCH.h"

PROC_DECLARE(0x6209210, internal_6209210, public_6209210);
extern "C" NAKED register_t __cdecl internal_6209210()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi]
        push 4
        push esi
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+4]
        push eax
        push 0
        push esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6209210)
    }
}
