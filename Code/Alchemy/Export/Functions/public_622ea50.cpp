#include "Alchemy-PCH.h"

PROC_DECLARE(0x622ea50, internal_622ea50, public_622ea50);
extern "C" NAKED register_t __cdecl internal_622ea50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x622ea50)
    }
}
