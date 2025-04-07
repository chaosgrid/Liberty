#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3e180, internal_6b3e180, public_6b3e180);
extern "C" NAKED register_t __cdecl internal_6b3e180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0fc]
        mov dword ptr ds : [public_6b73e0c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3e180)
    }
}
