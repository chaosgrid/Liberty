#include "Common-PCH.h"

PROC_DECLARE(0x62a8830, internal_62a8830, public_62a8830);
extern "C" NAKED register_t __cdecl internal_62a8830()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xD
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8830)
    }
}
