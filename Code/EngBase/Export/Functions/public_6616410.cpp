#include "EngBase-PCH.h"

PROC_DECLARE(0x6616410, internal_6616410, public_6616410);
extern "C" NAKED register_t __cdecl internal_6616410()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0x38]
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6616410)
    }
}
