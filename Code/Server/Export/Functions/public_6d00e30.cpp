#include "Server-PCH.h"

PROC_DECLARE(0x6d00e30, internal_6d00e30, public_6d00e30);
extern "C" NAKED register_t __cdecl internal_6d00e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67080]
        mov dword ptr ds : [public_6d8d94c], eax
        ret 
        UNREACHABLE_TRAP(0x6d00e30)
    }
}
