#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68950, internal_6b68950, public_6b68950);
extern "C" NAKED register_t __cdecl internal_6b68950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea98]
        mov dword ptr ds : [public_6b74600], eax
        ret 
        UNREACHABLE_TRAP(0x6b68950)
    }
}
