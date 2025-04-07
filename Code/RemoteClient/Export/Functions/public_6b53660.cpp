#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53660, internal_6b53660, public_6b53660);
extern "C" NAKED register_t __cdecl internal_6b53660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3f8]
        mov dword ptr ds : [public_6b73fd0], eax
        ret 
        UNREACHABLE_TRAP(0x6b53660)
    }
}
