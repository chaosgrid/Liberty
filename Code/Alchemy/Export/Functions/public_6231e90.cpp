#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231e90, internal_6231e90, public_6231e90);
extern "C" NAKED register_t __cdecl internal_6231e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x6231e90)
    }
}
