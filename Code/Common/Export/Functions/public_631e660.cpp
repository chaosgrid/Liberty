#include "Common-PCH.h"

PROC_DECLARE(0x631e660, internal_631e660, public_631e660);
extern "C" NAKED register_t __cdecl internal_631e660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3cd0]
        mov dword ptr ds : [public_640192c], eax
        ret 
        UNREACHABLE_TRAP(0x631e660)
    }
}
