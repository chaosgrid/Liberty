#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66120, internal_6b66120, public_6b66120);
extern "C" NAKED register_t __cdecl internal_6b66120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea08]
        mov dword ptr ds : [public_6b74544], eax
        ret 
        UNREACHABLE_TRAP(0x6b66120)
    }
}
