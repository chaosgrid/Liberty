#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b65e20, internal_6b65e20, public_6b65e20);
extern "C" NAKED register_t __cdecl internal_6b65e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9fc]
        mov dword ptr ds : [public_6b74530], eax
        ret 
        UNREACHABLE_TRAP(0x6b65e20)
    }
}
