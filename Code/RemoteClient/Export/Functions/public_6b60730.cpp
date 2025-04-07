#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60730, internal_6b60730, public_6b60730);
extern "C" NAKED register_t __cdecl internal_6b60730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7ec]
        mov dword ptr ds : [public_6b74394], eax
        ret 
        UNREACHABLE_TRAP(0x6b60730)
    }
}
