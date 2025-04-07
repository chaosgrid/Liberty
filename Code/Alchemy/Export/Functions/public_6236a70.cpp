#include "Alchemy-PCH.h"

PROC_DECLARE(0x6236a70, internal_6236a70, public_6236a70);
extern "C" NAKED register_t __cdecl internal_6236a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x6236a70)
    }
}
