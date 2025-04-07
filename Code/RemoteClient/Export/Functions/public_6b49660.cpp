#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b49660, internal_6b49660, public_6b49660);
extern "C" NAKED register_t __cdecl internal_6b49660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ce48]
        mov dword ptr ds : [public_6b73efc], eax
        ret 
        UNREACHABLE_TRAP(0x6b49660)
    }
}
