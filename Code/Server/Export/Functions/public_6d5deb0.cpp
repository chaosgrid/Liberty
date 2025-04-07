#include "Server-PCH.h"

PROC_DECLARE(0x6d5deb0, internal_6d5deb0, public_6d5deb0);
extern "C" NAKED register_t __cdecl internal_6d5deb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9d4]
        mov dword ptr ds : [public_6d90470], eax
        ret 
        UNREACHABLE_TRAP(0x6d5deb0)
    }
}
