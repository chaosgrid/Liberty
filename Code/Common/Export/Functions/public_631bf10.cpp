#include "Common-PCH.h"

PROC_DECLARE(0x631bf10, internal_631bf10, public_631bf10);
extern "C" NAKED register_t __cdecl internal_631bf10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3a5c]
        mov dword ptr ds : [public_64017f8], eax
        ret 
        UNREACHABLE_TRAP(0x631bf10)
    }
}
