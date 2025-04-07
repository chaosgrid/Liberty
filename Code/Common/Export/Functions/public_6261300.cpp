#include "Common-PCH.h"

PROC_DECLARE(0x6261300, internal_6261300, public_6261300);
extern "C" NAKED register_t __cdecl internal_6261300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x68B
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261300)
    }
}
