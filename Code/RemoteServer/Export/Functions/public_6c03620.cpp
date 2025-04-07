#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03620, internal_6c03620, public_6c03620);
extern "C" NAKED register_t __cdecl internal_6c03620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4d4]
        mov dword ptr ds : [public_6c141a8], eax
        ret 
        UNREACHABLE_TRAP(0x6c03620)
    }
}
