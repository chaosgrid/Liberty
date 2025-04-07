#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53120, internal_6b53120, public_6b53120);
extern "C" NAKED register_t __cdecl internal_6b53120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3e4]
        mov dword ptr ds : [public_6b73fac], eax
        ret 
        UNREACHABLE_TRAP(0x6b53120)
    }
}
