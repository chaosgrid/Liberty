#include "Alchemy-PCH.h"

PROC_DECLARE(0x622ea70, internal_622ea70, public_622ea70);
extern "C" NAKED register_t __cdecl internal_622ea70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x622ea70)
    }
}
