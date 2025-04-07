#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55ea0, internal_6b55ea0, public_6b55ea0);
extern "C" NAKED register_t __cdecl internal_6b55ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4b4]
        mov dword ptr ds : [public_6b740ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b55ea0)
    }
}
