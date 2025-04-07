#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c380, internal_623c380, public_623c380);
extern "C" NAKED register_t __cdecl internal_623c380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x623c380)
    }
}
