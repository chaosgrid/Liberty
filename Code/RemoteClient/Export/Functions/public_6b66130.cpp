#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66130, internal_6b66130, public_6b66130);
extern "C" NAKED register_t __cdecl internal_6b66130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea0c]
        mov dword ptr ds : [public_6b7453c], eax
        ret 
        UNREACHABLE_TRAP(0x6b66130)
    }
}
