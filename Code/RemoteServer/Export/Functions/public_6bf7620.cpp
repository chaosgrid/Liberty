#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7620, internal_6bf7620, public_6bf7620);
extern "C" NAKED register_t __cdecl internal_6bf7620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e178]
        mov dword ptr ds : [public_6c13e4c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7620)
    }
}
