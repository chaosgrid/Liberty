#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223ea0, internal_6223ea0, public_6223ea0);
extern "C" NAKED register_t __cdecl internal_6223ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x6223ea0)
    }
}
