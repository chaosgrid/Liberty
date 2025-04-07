#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8ce0, internal_6bf8ce0, public_6bf8ce0);
extern "C" NAKED register_t __cdecl internal_6bf8ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e234]
        mov dword ptr ds : [public_6c13ecc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8ce0)
    }
}
