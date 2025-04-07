#include "Common-PCH.h"

PROC_DECLARE(0x6261d70, internal_6261d70, public_6261d70);
extern "C" NAKED register_t __cdecl internal_6261d70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 7
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261d70)
    }
}
