#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59c50, internal_6b59c50, public_6b59c50);
extern "C" NAKED register_t __cdecl internal_6b59c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5a8]
        mov dword ptr ds : [public_6b74180], eax
        ret 
        UNREACHABLE_TRAP(0x6b59c50)
    }
}
