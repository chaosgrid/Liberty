#include "Server-PCH.h"

PROC_DECLARE(0x6d00e20, internal_6d00e20, public_6d00e20);
extern "C" NAKED register_t __cdecl internal_6d00e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6707c]
        mov dword ptr ds : [public_6d8d950], eax
        ret 
        UNREACHABLE_TRAP(0x6d00e20)
    }
}
