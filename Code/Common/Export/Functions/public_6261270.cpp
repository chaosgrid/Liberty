#include "Common-PCH.h"

PROC_DECLARE(0x6261270, internal_6261270, public_6261270);
extern "C" NAKED register_t __cdecl internal_6261270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 9
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261270)
    }
}
