#include "THORN-PCH.h"

PROC_DECLARE(0x6f33140, internal_6f33140, public_6f33140);
extern "C" NAKED register_t __cdecl internal_6f33140()
{
    __asm
    {
        mov eax, offset public_6f5fd10
        ret 
        UNREACHABLE_TRAP(0x6f33140)
    }
}
