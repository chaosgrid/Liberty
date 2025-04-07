#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c400, internal_623c400, public_623c400);
extern "C" NAKED register_t __cdecl internal_623c400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x623c400)
    }
}
