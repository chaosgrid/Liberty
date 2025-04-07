#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7b10, internal_6bf7b10, public_6bf7b10);
extern "C" NAKED register_t __cdecl internal_6bf7b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e18c]
        mov dword ptr ds : [public_6c13e54], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7b10)
    }
}
