#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c3f0, internal_623c3f0, public_623c3f0);
extern "C" NAKED register_t __cdecl internal_623c3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x623c3f0)
    }
}
