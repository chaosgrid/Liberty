#include "Alchemy-PCH.h"

PROC_DECLARE(0x62273b0, internal_62273b0, public_62273b0);
extern "C" NAKED register_t __cdecl internal_62273b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x1C]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62273b0)
    }
}
