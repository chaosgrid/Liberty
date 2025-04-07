#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e740, internal_6b5e740, public_6b5e740);
extern "C" NAKED register_t __cdecl internal_6b5e740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e738]
        mov dword ptr ds : [public_6b74310], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e740)
    }
}
