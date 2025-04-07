#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346e70);

PROC_DECLARE(0x6346e70, internal_6346e70, public_6346e70);
extern "C" NAKED register_t __cdecl internal_6346e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x70], edx
        push esi
        lea eax, ds:[ecx+0xD4]
        mov esi, dword ptr ds : [eax]
        lea edx, ds:[ecx+0xE4]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ds : [edx+0xC], eax
        xor eax, eax
        mov dword ptr ds : [ecx+0x148], eax
        mov dword ptr ds : [ecx+0xA4], eax
        mov dword ptr ds : [ecx+0xA8], eax
        mov dword ptr ds : [ecx+0xAC], eax
        mov dword ptr ds : [ecx+0xC4], eax
        mov dword ptr ds : [ecx+0xC8], eax
        mov dword ptr ds : [ecx+0xCC], eax
        mov dword ptr ds : [ecx+0x144], eax
        mov dword ptr ds : [ecx+0x14C], eax
        mov dword ptr ds : [ecx+0x134], 0x3F800000
        mov dword ptr ds : [ecx+0x138], eax
        mov dword ptr ds : [ecx+0x13C], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6346e70)
    }
}
