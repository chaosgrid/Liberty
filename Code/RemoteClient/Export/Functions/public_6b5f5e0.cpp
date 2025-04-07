#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5f5e0, internal_6b5f5e0, public_6b5f5e0);
extern "C" NAKED register_t __cdecl internal_6b5f5e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e784]
        mov dword ptr ds : [public_6b7433c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5f5e0)
    }
}
