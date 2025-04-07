#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03cc0, internal_6c03cc0, public_6c03cc0);
extern "C" NAKED register_t __cdecl internal_6c03cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e548]
        mov dword ptr ds : [public_6c141d4], eax
        ret 
        UNREACHABLE_TRAP(0x6c03cc0)
    }
}
