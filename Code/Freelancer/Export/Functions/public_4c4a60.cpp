#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4a60);

PROC_DECLARE(0x4c4a60, internal_4c4a60, public_4c4a60);
extern "C" NAKED register_t __cdecl internal_4c4a60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, 9
        mov edi, offset public_6732c0
        rep movsd
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c4a60)
    }
}
