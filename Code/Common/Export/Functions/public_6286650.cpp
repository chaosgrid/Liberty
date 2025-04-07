#include "Common-PCH.h"

PROC_DECLARE(0x6286650, internal_6286650, public_6286650);
extern "C" NAKED register_t __cdecl internal_6286650()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x1A
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6286650)
    }
}
