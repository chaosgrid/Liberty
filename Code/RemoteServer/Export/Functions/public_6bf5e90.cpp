#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5e90, internal_6bf5e90, public_6bf5e90);
extern "C" NAKED register_t __cdecl internal_6bf5e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e108]
        mov dword ptr ds : [public_6c13ddc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5e90)
    }
}
