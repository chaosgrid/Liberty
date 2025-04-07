#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05ae0, internal_6c05ae0, public_6c05ae0);
extern "C" NAKED register_t __cdecl internal_6c05ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5ac]
        mov dword ptr ds : [public_6c1423c], eax
        ret 
        UNREACHABLE_TRAP(0x6c05ae0)
    }
}
