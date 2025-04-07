#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b686e0, internal_6b686e0, public_6b686e0);
extern "C" NAKED register_t __cdecl internal_6b686e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea84]
        mov dword ptr ds : [public_6b745dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b686e0)
    }
}
