#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c075e0, internal_6c075e0, public_6c075e0);
extern "C" NAKED register_t __cdecl internal_6c075e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e600]
        mov dword ptr ds : [public_6c142a8], eax
        ret 
        UNREACHABLE_TRAP(0x6c075e0)
    }
}
