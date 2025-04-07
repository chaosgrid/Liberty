#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdb960, internal_6bdb960, public_6bdb960);
extern "C" NAKED register_t __cdecl internal_6bdb960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb10]
        mov dword ptr ds : [public_6c13a88], eax
        ret 
        UNREACHABLE_TRAP(0x6bdb960)
    }
}
