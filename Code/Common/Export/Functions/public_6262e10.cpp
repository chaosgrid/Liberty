#include "Common-PCH.h"

PROC_DECLARE(0x6262e10, internal_6262e10, public_6262e10);
extern "C" NAKED register_t __cdecl internal_6262e10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x23
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6262e10)
    }
}
