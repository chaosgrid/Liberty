#include "Common-PCH.h"

PROC_DECLARE(0x6261200, internal_6261200, public_6261200);
extern "C" NAKED register_t __cdecl internal_6261200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, ecx
        push esi
        push edi
        lea esi, ds:[edx+0xC]
        mov ecx, 9
        mov edi, eax
        rep movsd
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261200)
    }
}
