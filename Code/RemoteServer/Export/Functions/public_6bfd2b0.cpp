#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd2b0, internal_6bfd2b0, public_6bfd2b0);
extern "C" NAKED register_t __cdecl internal_6bfd2b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e354]
        mov dword ptr ds : [public_6c13fac], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd2b0)
    }
}
