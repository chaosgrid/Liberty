#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfc660, internal_6bfc660, public_6bfc660);
extern "C" NAKED register_t __cdecl internal_6bfc660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e310]
        mov dword ptr ds : [public_6c13f84], eax
        ret 
        UNREACHABLE_TRAP(0x6bfc660)
    }
}
