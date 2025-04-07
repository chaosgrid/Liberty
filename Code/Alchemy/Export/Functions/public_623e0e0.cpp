#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e0e0, internal_623e0e0, public_623e0e0);
extern "C" NAKED register_t __cdecl internal_623e0e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x623e0e0)
    }
}
