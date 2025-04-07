#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b675f0, internal_6b675f0, public_6b675f0);
extern "C" NAKED register_t __cdecl internal_6b675f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea60]
        mov dword ptr ds : [public_6b745ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b675f0)
    }
}
