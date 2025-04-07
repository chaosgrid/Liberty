#include "Common-PCH.h"

PROC_DECLARE(0x6263ca0, internal_6263ca0, public_6263ca0);
extern "C" NAKED register_t __cdecl internal_6263ca0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 8
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6263ca0)
    }
}
