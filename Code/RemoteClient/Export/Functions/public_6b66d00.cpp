#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66d00, internal_6b66d00, public_6b66d00);
extern "C" NAKED register_t __cdecl internal_6b66d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea38]
        mov dword ptr ds : [public_6b74580], eax
        ret 
        UNREACHABLE_TRAP(0x6b66d00)
    }
}
