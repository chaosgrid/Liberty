#include "Common-PCH.h"

PROC_DECLARE(0x6266250, internal_6266250, public_6266250);
extern "C" NAKED register_t __cdecl internal_6266250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xA
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6266250)
    }
}
