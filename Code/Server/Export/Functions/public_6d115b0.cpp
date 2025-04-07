#include "Server-PCH.h"

PROC_DECLARE(0x6d115b0, internal_6d115b0, public_6d115b0);
extern "C" NAKED register_t __cdecl internal_6d115b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6831c]
        mov dword ptr ds : [public_6d8da64], eax
        ret 
        UNREACHABLE_TRAP(0x6d115b0)
    }
}
