#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60fb0, internal_6b60fb0, public_6b60fb0);
extern "C" NAKED register_t __cdecl internal_6b60fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e820]
        mov dword ptr ds : [public_6b743bc], eax
        ret 
        UNREACHABLE_TRAP(0x6b60fb0)
    }
}
