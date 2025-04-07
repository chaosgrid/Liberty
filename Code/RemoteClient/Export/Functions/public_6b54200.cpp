#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54200, internal_6b54200, public_6b54200);
extern "C" NAKED register_t __cdecl internal_6b54200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e428]
        mov dword ptr ds : [public_6b74014], eax
        ret 
        UNREACHABLE_TRAP(0x6b54200)
    }
}
