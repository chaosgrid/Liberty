#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be40c0, internal_6be40c0, public_6be40c0);
extern "C" NAKED register_t __cdecl internal_6be40c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd9c]
        mov dword ptr ds : [public_6c13b6c], eax
        ret 
        UNREACHABLE_TRAP(0x6be40c0)
    }
}
