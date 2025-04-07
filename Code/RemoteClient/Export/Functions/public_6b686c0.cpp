#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b686c0, internal_6b686c0, public_6b686c0);
extern "C" NAKED register_t __cdecl internal_6b686c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea80]
        mov dword ptr ds : [public_6b745e0], eax
        ret 
        UNREACHABLE_TRAP(0x6b686c0)
    }
}
