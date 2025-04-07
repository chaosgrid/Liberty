#include "Common-PCH.h"

PROC_DECLARE(0x6313780, internal_6313780, public_6313780);
extern "C" NAKED register_t __cdecl internal_6313780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37a8]
        mov dword ptr ds : [public_64012dc], eax
        ret 
        UNREACHABLE_TRAP(0x6313780)
    }
}
