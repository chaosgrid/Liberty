#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01b60, internal_6c01b60, public_6c01b60);
extern "C" NAKED register_t __cdecl internal_6c01b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e450]
        mov dword ptr ds : [public_6c140f8], eax
        ret 
        UNREACHABLE_TRAP(0x6c01b60)
    }
}
