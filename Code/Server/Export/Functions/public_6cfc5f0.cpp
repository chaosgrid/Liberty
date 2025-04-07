#include "Server-PCH.h"

PROC_DECLARE(0x6cfc5f0, internal_6cfc5f0, public_6cfc5f0);
extern "C" NAKED register_t __cdecl internal_6cfc5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b94]
        mov dword ptr ds : [public_6d8d89c], eax
        ret 
        UNREACHABLE_TRAP(0x6cfc5f0)
    }
}
