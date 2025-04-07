#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711a60, internal_6711a60, public_6711a60);
extern "C" NAKED register_t __cdecl internal_6711a60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov ecx, 6
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6711a60)
    }
}
