#include "Alchemy-PCH.h"

PROC_DECLARE(0x62026a0, internal_62026a0, public_62026a0);
extern "C" NAKED register_t __cdecl internal_62026a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x62026a0)
    }
}
