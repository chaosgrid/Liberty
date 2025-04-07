#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01b80, internal_6c01b80, public_6c01b80);
extern "C" NAKED register_t __cdecl internal_6c01b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e454]
        mov dword ptr ds : [public_6c140f4], eax
        ret 
        UNREACHABLE_TRAP(0x6c01b80)
    }
}
