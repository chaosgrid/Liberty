#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bde960, internal_6bde960, public_6bde960);
extern "C" NAKED register_t __cdecl internal_6bde960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bbfc]
        mov dword ptr ds : [public_6c13ae4], eax
        ret 
        UNREACHABLE_TRAP(0x6bde960)
    }
}
