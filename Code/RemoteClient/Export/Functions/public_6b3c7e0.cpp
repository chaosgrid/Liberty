#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c7e0, internal_6b3c7e0, public_6b3c7e0);
extern "C" NAKED register_t __cdecl internal_6b3c7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c078]
        mov dword ptr ds : [public_6b73dd4], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c7e0)
    }
}
