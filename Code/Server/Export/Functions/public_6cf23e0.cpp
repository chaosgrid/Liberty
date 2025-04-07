#include "Server-PCH.h"

PROC_DECLARE(0x6cf23e0, internal_6cf23e0, public_6cf23e0);
extern "C" NAKED register_t __cdecl internal_6cf23e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65f84]
        mov dword ptr ds : [public_6d8d774], eax
        ret 
        UNREACHABLE_TRAP(0x6cf23e0)
    }
}
