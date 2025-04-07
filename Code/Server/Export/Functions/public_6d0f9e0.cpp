#include "Server-PCH.h"

PROC_DECLARE(0x6d0f9e0, internal_6d0f9e0, public_6d0f9e0);
extern "C" NAKED register_t __cdecl internal_6d0f9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68310]
        mov dword ptr ds : [public_6d8da54], eax
        ret 
        UNREACHABLE_TRAP(0x6d0f9e0)
    }
}
