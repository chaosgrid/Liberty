#include "Common-PCH.h"

PROC_DECLARE(0x6261290, internal_6261290, public_6261290);
extern "C" NAKED register_t __cdecl internal_6261290()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x2A
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261290)
    }
}
