#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdc530, internal_6bdc530, public_6bdc530);
extern "C" NAKED register_t __cdecl internal_6bdc530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb50]
        mov dword ptr ds : [public_6c13aa4], eax
        ret 
        UNREACHABLE_TRAP(0x6bdc530)
    }
}
