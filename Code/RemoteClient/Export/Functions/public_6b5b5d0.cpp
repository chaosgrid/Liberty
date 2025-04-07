#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b5d0, internal_6b5b5d0, public_6b5b5d0);
extern "C" NAKED register_t __cdecl internal_6b5b5d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e61c]
        mov dword ptr ds : [public_6b7420c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b5d0)
    }
}
