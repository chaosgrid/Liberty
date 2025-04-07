#include "Alchemy-PCH.h"

PROC_DECLARE(0x622ea80, internal_622ea80, public_622ea80);
extern "C" NAKED register_t __cdecl internal_622ea80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x622ea80)
    }
}
