#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05af0, internal_6c05af0, public_6c05af0);
extern "C" NAKED register_t __cdecl internal_6c05af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5b0]
        mov dword ptr ds : [public_6c14234], eax
        ret 
        UNREACHABLE_TRAP(0x6c05af0)
    }
}
