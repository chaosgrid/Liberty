#include "Server-PCH.h"

PROC_DECLARE(0x6d3d090, internal_6d3d090, public_6d3d090);
extern "C" NAKED register_t __cdecl internal_6d3d090()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d3d090)
    }
}
