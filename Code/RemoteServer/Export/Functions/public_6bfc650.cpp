#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfc650, internal_6bfc650, public_6bfc650);
extern "C" NAKED register_t __cdecl internal_6bfc650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e30c]
        mov dword ptr ds : [public_6c13f8c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfc650)
    }
}
