#include "Common-PCH.h"

PROC_DECLARE(0x62d0b90, internal_62d0b90, public_62d0b90);
extern "C" NAKED register_t __cdecl internal_62d0b90()
{
    __asm
    {
        push edi
        mov ecx, 0x15
        xor eax, eax
        mov edi, offset public_63fc8e4
        mov dword ptr ds : [public_63fc8e0], 0
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x62d0b90)
    }
}
