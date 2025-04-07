#include "Alchemy-PCH.h"

PROC_DECLARE(0x62357b0, internal_62357b0, public_62357b0);
extern "C" NAKED register_t __cdecl internal_62357b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x62357b0)
    }
}
