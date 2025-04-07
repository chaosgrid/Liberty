#include "Common-PCH.h"

PROC_DECLARE(0x632d740, internal_632d740, public_632d740);
extern "C" NAKED register_t __cdecl internal_632d740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48b0]
        mov dword ptr ds : [public_640a714], eax
        ret 
        UNREACHABLE_TRAP(0x632d740)
    }
}
