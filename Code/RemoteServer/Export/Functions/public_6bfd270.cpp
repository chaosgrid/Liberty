#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfd270, internal_6bfd270, public_6bfd270);
extern "C" NAKED register_t __cdecl internal_6bfd270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e318]
        mov dword ptr ds : [public_6c13f98], eax
        ret 
        UNREACHABLE_TRAP(0x6bfd270)
    }
}
