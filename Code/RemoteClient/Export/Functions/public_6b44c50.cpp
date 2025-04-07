#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44c50, internal_6b44c50, public_6b44c50);
extern "C" NAKED register_t __cdecl internal_6b44c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c290]
        mov dword ptr ds : [public_6b73e9c], eax
        ret 
        UNREACHABLE_TRAP(0x6b44c50)
    }
}
