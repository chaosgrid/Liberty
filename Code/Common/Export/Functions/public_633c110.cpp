#include "Common-PCH.h"

PROC_DECLARE(0x633c110, internal_633c110, public_633c110);
extern "C" NAKED register_t __cdecl internal_633c110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a84c]
        ret 
        UNREACHABLE_TRAP(0x633c110)
    }
}
