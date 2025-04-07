#include "Server-PCH.h"

PROC_DECLARE(0x6d11890, internal_6d11890, public_6d11890);
extern "C" NAKED register_t __cdecl internal_6d11890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6832c]
        mov dword ptr ds : [public_6d8e52c], eax
        ret 
        UNREACHABLE_TRAP(0x6d11890)
    }
}
