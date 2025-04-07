#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9130, internal_6bd9130, public_6bd9130);
extern "C" NAKED register_t __cdecl internal_6bd9130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7c0]
        mov dword ptr ds : [public_6c13a50], eax
        ret 
        UNREACHABLE_TRAP(0x6bd9130)
    }
}
