#include "Common-PCH.h"

PROC_DECLARE(0x6287290, internal_6287290, public_6287290);
extern "C" NAKED register_t __cdecl internal_6287290()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6287290)
    }
}
