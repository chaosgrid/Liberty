#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223e40, internal_6223e40, public_6223e40);
extern "C" NAKED register_t __cdecl internal_6223e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x6223e40)
    }
}
