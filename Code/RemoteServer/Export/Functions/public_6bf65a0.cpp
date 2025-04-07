#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf65a0, internal_6bf65a0, public_6bf65a0);
extern "C" NAKED register_t __cdecl internal_6bf65a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e138]
        mov dword ptr ds : [public_6c13e08], eax
        ret 
        UNREACHABLE_TRAP(0x6bf65a0)
    }
}
