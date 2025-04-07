#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44cf0, internal_6b44cf0, public_6b44cf0);
extern "C" NAKED register_t __cdecl internal_6b44cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c29c]
        mov dword ptr ds : [public_6b73eb0], eax
        ret 
        UNREACHABLE_TRAP(0x6b44cf0)
    }
}
