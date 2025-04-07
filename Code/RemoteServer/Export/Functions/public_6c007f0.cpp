#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c007f0, internal_6c007f0, public_6c007f0);
extern "C" NAKED register_t __cdecl internal_6c007f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e408]
        mov dword ptr ds : [public_6c14098], eax
        ret 
        UNREACHABLE_TRAP(0x6c007f0)
    }
}
