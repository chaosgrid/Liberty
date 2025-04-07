#include "Shading-PCH.h"

PROC_DECLARE(0x6ebcf60, internal_6ebcf60, public_6ebcf60);
extern "C" NAKED register_t __cdecl internal_6ebcf60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 8
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ebcf60)
    }
}
