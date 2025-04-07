#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207420, internal_6207420, public_6207420);
extern "C" NAKED register_t __cdecl internal_6207420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6207420)
    }
}
