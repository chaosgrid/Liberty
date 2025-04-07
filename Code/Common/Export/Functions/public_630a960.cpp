#include "Common-PCH.h"

PROC_DECLARE(0x630a960, internal_630a960, public_630a960);
extern "C" NAKED register_t __cdecl internal_630a960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3484]
        mov dword ptr ds : [public_63fcf1c], eax
        ret 
        UNREACHABLE_TRAP(0x630a960)
    }
}
