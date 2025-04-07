#include "Common-PCH.h"

PROC_DECLARE(0x62612b0, internal_62612b0, public_62612b0);
extern "C" NAKED register_t __cdecl internal_62612b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x15
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62612b0)
    }
}
