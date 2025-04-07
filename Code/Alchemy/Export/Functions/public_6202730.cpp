#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202730, internal_6202730, public_6202730);
extern "C" NAKED register_t __cdecl internal_6202730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6202730)
    }
}
