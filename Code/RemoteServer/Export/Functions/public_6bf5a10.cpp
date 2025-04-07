#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5a10, internal_6bf5a10, public_6bf5a10);
extern "C" NAKED register_t __cdecl internal_6bf5a10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0fc]
        mov dword ptr ds : [public_6c13dc4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5a10)
    }
}
