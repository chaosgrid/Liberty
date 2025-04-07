#include "Common-PCH.h"

PROC_DECLARE(0x62d4430, internal_62d4430, public_62d4430);
extern "C" NAKED register_t __cdecl internal_62d4430()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        add esi, 0x1584
        mov ecx, 0xF6
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d4430)
    }
}
