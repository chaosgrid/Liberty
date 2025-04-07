#include "Alchemy-PCH.h"

PROC_DECLARE(0x622e9f0, internal_622e9f0, public_622e9f0);
extern "C" NAKED register_t __cdecl internal_622e9f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x622e9f0)
    }
}
