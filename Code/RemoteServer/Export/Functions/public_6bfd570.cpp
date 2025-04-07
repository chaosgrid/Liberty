#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd570, internal_6bfd570, public_6bfd570);
extern "C" NAKED register_t __cdecl internal_6bfd570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e360]
        mov dword ptr ds : [public_6c13fb8], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd570)
    }
}
