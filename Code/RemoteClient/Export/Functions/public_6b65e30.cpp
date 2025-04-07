#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b65e30, internal_6b65e30, public_6b65e30);
extern "C" NAKED register_t __cdecl internal_6b65e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9fc]
        mov dword ptr ds : [public_6b74534], eax
        ret 
        UNREACHABLE_TRAP(0x6b65e30)
    }
}
