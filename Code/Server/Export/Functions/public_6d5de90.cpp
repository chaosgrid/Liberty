#include "Server-PCH.h"

PROC_DECLARE(0x6d5de90, internal_6d5de90, public_6d5de90);
extern "C" NAKED register_t __cdecl internal_6d5de90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9d0]
        mov dword ptr ds : [public_6d90478], eax
        ret 
        UNREACHABLE_TRAP(0x6d5de90)
    }
}
