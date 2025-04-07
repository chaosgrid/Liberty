#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b690, internal_623b690, public_623b690);
extern "C" NAKED register_t __cdecl internal_623b690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257b90], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623b690)
    }
}
