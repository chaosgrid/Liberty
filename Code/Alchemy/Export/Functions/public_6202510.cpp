#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202510, internal_6202510, public_6202510);
extern "C" NAKED register_t __cdecl internal_6202510()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, 9
        mov esi, offset public_62578e4
        xor eax, eax
        rep movsd
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6202510)
    }
}
