#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03880, internal_6c03880, public_6c03880);
extern "C" NAKED register_t __cdecl internal_6c03880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4fc]
        mov dword ptr ds : [public_6c141c8], eax
        ret 
        UNREACHABLE_TRAP(0x6c03880)
    }
}
