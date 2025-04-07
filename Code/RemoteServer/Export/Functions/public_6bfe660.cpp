#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe660, internal_6bfe660, public_6bfe660);
extern "C" NAKED register_t __cdecl internal_6bfe660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3a8]
        mov dword ptr ds : [public_6c1401c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe660)
    }
}
