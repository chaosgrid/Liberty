#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd280, internal_6bfd280, public_6bfd280);
extern "C" NAKED register_t __cdecl internal_6bfd280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e318]
        mov dword ptr ds : [public_6c13f9c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd280)
    }
}
