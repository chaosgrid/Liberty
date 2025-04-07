#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7630, internal_6bf7630, public_6bf7630);
extern "C" NAKED register_t __cdecl internal_6bf7630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e17c]
        mov dword ptr ds : [public_6c13e44], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7630)
    }
}
