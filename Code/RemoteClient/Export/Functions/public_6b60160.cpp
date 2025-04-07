#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60160, internal_6b60160, public_6b60160);
extern "C" NAKED register_t __cdecl internal_6b60160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7a0]
        mov dword ptr ds : [public_6b74364], eax
        ret 
        UNREACHABLE_TRAP(0x6b60160)
    }
}
