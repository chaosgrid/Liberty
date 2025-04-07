#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b551b0, internal_6b551b0, public_6b551b0);
extern "C" NAKED register_t __cdecl internal_6b551b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e470]
        mov dword ptr ds : [public_6b74074], eax
        ret 
        UNREACHABLE_TRAP(0x6b551b0)
    }
}
