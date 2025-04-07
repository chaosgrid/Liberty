#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e050, internal_623e050, public_623e050);
extern "C" NAKED register_t __cdecl internal_623e050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x623e050)
    }
}
