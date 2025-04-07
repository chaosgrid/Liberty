#include "Alchemy-PCH.h"

PROC_DECLARE(0x622ea60, internal_622ea60, public_622ea60);
extern "C" NAKED register_t __cdecl internal_622ea60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x622ea60)
    }
}
