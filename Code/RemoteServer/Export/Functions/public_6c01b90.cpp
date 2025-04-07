#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01b90, internal_6c01b90, public_6c01b90);
extern "C" NAKED register_t __cdecl internal_6c01b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e45c]
        mov dword ptr ds : [public_6c14108], eax
        ret 
        UNREACHABLE_TRAP(0x6c01b90)
    }
}
