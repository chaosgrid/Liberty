#include "Common-PCH.h"

PROC_DECLARE(0x6263010, internal_6263010, public_6263010);
extern "C" NAKED register_t __cdecl internal_6263010()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x102
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6263010)
    }
}
