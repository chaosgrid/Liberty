#include "Server-PCH.h"

PROC_DECLARE(0x6cf7a70, internal_6cf7a70, public_6cf7a70);
extern "C" NAKED register_t __cdecl internal_6cf7a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66af8]
        mov dword ptr ds : [public_6d8d818], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7a70)
    }
}
