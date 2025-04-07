#include "Common-PCH.h"

PROC_DECLARE(0x6263b40, internal_6263b40, public_6263b40);
extern "C" NAKED register_t __cdecl internal_6263b40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 6
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6263b40)
    }
}
