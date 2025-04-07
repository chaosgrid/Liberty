#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39440, internal_6b39440, public_6b39440);
extern "C" NAKED register_t __cdecl internal_6b39440()
{
    __asm
    {
        mov dword ptr ds : [public_6b73b20], offset public_6b6bd94
        ret 
        UNREACHABLE_TRAP(0x6b39440)
    }
}
