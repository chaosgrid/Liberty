#include "Server-PCH.h"

PROC_DECLARE(0x6cf3c70, internal_6cf3c70, public_6cf3c70);
extern "C" NAKED register_t __cdecl internal_6cf3c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66490]
        mov dword ptr ds : [public_6d8d7c0], eax
        ret 
        UNREACHABLE_TRAP(0x6cf3c70)
    }
}
