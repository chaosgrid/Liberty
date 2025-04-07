#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67000, internal_6b67000, public_6b67000);
extern "C" NAKED register_t __cdecl internal_6b67000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea44]
        mov dword ptr ds : [public_6b74594], eax
        ret 
        UNREACHABLE_TRAP(0x6b67000)
    }
}
