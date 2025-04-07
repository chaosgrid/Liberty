#include "Server-PCH.h"

PROC_DECLARE(0x6cf7a80, internal_6cf7a80, public_6cf7a80);
extern "C" NAKED register_t __cdecl internal_6cf7a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66af8]
        mov dword ptr ds : [public_6d8d814], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7a80)
    }
}
