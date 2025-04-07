#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c049f0, internal_6c049f0, public_6c049f0);
extern "C" NAKED register_t __cdecl internal_6c049f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e588]
        mov dword ptr ds : [public_6c1420c], eax
        ret 
        UNREACHABLE_TRAP(0x6c049f0)
    }
}
