#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03cb0, internal_6c03cb0, public_6c03cb0);
extern "C" NAKED register_t __cdecl internal_6c03cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e544]
        mov dword ptr ds : [public_6c141dc], eax
        ret 
        UNREACHABLE_TRAP(0x6c03cb0)
    }
}
