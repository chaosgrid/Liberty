#include "Common-PCH.h"

PROC_DECLARE(0x633bf10, internal_633bf10, public_633bf10);
extern "C" NAKED register_t __cdecl internal_633bf10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a838]
        ret 
        UNREACHABLE_TRAP(0x633bf10)
    }
}
