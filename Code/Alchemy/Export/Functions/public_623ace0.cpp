#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ace0, internal_623ace0, public_623ace0);
extern "C" NAKED register_t __cdecl internal_623ace0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x623ace0)
    }
}
