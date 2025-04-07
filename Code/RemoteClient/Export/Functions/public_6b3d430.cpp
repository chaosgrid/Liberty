#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d430, internal_6b3d430, public_6b3d430);
extern "C" NAKED register_t __cdecl internal_6b3d430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0bc]
        mov dword ptr ds : [public_6b73dec], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d430)
    }
}
