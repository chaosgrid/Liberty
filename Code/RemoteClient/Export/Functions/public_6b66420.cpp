#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66420, internal_6b66420, public_6b66420);
extern "C" NAKED register_t __cdecl internal_6b66420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea18]
        mov dword ptr ds : [public_6b7454c], eax
        ret 
        UNREACHABLE_TRAP(0x6b66420)
    }
}
