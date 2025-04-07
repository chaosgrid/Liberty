#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c075d0, internal_6c075d0, public_6c075d0);
extern "C" NAKED register_t __cdecl internal_6c075d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5f8]
        mov dword ptr ds : [public_6c14294], eax
        ret 
        UNREACHABLE_TRAP(0x6c075d0)
    }
}
