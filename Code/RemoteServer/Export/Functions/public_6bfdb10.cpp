#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfdb10, internal_6bfdb10, public_6bfdb10);
extern "C" NAKED register_t __cdecl internal_6bfdb10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e37c]
        mov dword ptr ds : [public_6c13fd4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfdb10)
    }
}
