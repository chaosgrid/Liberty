#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd580, internal_6bfd580, public_6bfd580);
extern "C" NAKED register_t __cdecl internal_6bfd580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e360]
        mov dword ptr ds : [public_6c13fbc], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd580)
    }
}
