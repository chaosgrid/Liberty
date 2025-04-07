#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf65b0, internal_6bf65b0, public_6bf65b0);
extern "C" NAKED register_t __cdecl internal_6bf65b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e138]
        mov dword ptr ds : [public_6c13e0c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf65b0)
    }
}
