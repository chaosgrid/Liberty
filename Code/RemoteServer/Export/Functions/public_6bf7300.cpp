#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7300, internal_6bf7300, public_6bf7300);
extern "C" NAKED register_t __cdecl internal_6bf7300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e168]
        mov dword ptr ds : [public_6c13e3c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7300)
    }
}
