#include "Server-PCH.h"

PROC_DECLARE(0x6cfc5e0, internal_6cfc5e0, public_6cfc5e0);
extern "C" NAKED register_t __cdecl internal_6cfc5e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b94]
        mov dword ptr ds : [public_6d8d8a0], eax
        ret 
        UNREACHABLE_TRAP(0x6cfc5e0)
    }
}
