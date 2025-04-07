#include "Common-PCH.h"

PROC_DECLARE(0x62959f0, internal_62959f0, public_62959f0);
extern "C" NAKED register_t __cdecl internal_62959f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xF
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62959f0)
    }
}
