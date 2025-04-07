#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be40b0, internal_6be40b0, public_6be40b0);
extern "C" NAKED register_t __cdecl internal_6be40b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd9c]
        mov dword ptr ds : [public_6c13b68], eax
        ret 
        UNREACHABLE_TRAP(0x6be40b0)
    }
}
