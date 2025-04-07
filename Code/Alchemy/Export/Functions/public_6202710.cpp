#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202710, internal_6202710, public_6202710);
extern "C" NAKED register_t __cdecl internal_6202710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x6202710)
    }
}
