#include "Server-PCH.h"

PROC_DECLARE(0x6d17200, internal_6d17200, public_6d17200);
extern "C" NAKED register_t __cdecl internal_6d17200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d685c4]
        mov dword ptr ds : [public_6d8e568], eax
        ret 
        UNREACHABLE_TRAP(0x6d17200)
    }
}
