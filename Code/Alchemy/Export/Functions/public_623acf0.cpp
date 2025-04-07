#include "Alchemy-PCH.h"

PROC_DECLARE(0x623acf0, internal_623acf0, public_623acf0);
extern "C" NAKED register_t __cdecl internal_623acf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x623acf0)
    }
}
