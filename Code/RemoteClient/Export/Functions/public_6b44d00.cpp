#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44d00, internal_6b44d00, public_6b44d00);
extern "C" NAKED register_t __cdecl internal_6b44d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c29c]
        mov dword ptr ds : [public_6b73eb4], eax
        ret 
        UNREACHABLE_TRAP(0x6b44d00)
    }
}
