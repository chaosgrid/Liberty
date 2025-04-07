#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda7b0, internal_6bda7b0, public_6bda7b0);
extern "C" NAKED register_t __cdecl internal_6bda7b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bad4]
        mov dword ptr ds : [public_6c13a60], eax
        ret 
        UNREACHABLE_TRAP(0x6bda7b0)
    }
}
