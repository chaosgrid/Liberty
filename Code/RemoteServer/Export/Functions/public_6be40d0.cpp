#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be40d0, internal_6be40d0, public_6be40d0);
extern "C" NAKED register_t __cdecl internal_6be40d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bda0]
        mov dword ptr ds : [public_6c13b64], eax
        ret 
        UNREACHABLE_TRAP(0x6be40d0)
    }
}
