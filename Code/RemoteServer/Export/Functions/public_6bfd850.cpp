#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd850, internal_6bfd850, public_6bfd850);
extern "C" NAKED register_t __cdecl internal_6bfd850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e370]
        mov dword ptr ds : [public_6c13fc4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd850)
    }
}
