#include "Server-PCH.h"

PROC_DECLARE(0x6d17c70, internal_6d17c70, public_6d17c70);
extern "C" NAKED register_t __cdecl internal_6d17c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d685cc]
        mov dword ptr ds : [public_6d8e590], eax
        ret 
        UNREACHABLE_TRAP(0x6d17c70)
    }
}
