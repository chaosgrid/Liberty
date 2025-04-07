#include "Alchemy-PCH.h"

PROC_DECLARE(0x621ec80, internal_621ec80, public_621ec80);
extern "C" NAKED register_t __cdecl internal_621ec80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        shl eax, 4
        mov edx, dword ptr ds : [ecx+0x18]
        push esi
        mov esi, dword ptr ds : [eax+edx+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xC], esi
        mov esi, dword ptr ds : [ecx+0x18]
        mov esi, dword ptr ds : [eax+esi+0xC]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+0x18]
        mov esi, dword ptr ds : [eax+esi]
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0x18]
        pop esi
        mov eax, dword ptr ds : [eax+ecx+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621ec80)
    }
}
