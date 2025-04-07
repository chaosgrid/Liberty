#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c7f0, internal_6b3c7f0, public_6b3c7f0);
extern "C" NAKED register_t __cdecl internal_6b3c7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c07c]
        mov dword ptr ds : [public_6b73dcc], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c7f0)
    }
}
