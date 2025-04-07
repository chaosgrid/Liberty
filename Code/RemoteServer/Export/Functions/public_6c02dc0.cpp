#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02dc0, internal_6c02dc0, public_6c02dc0);
extern "C" NAKED register_t __cdecl internal_6c02dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4b0]
        mov dword ptr ds : [public_6c1417c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02dc0)
    }
}
