#include "Common-PCH.h"

PROC_DECLARE(0x6287b20, internal_6287b20, public_6287b20);
extern "C" NAKED register_t __cdecl internal_6287b20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 5
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6287b20)
    }
}
