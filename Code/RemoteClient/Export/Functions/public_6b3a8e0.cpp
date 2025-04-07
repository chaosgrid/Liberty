#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3a8e0, internal_6b3a8e0, public_6b3a8e0);
extern "C" NAKED register_t __cdecl internal_6b3a8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf30]
        mov dword ptr ds : [public_6b73d7c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3a8e0)
    }
}
