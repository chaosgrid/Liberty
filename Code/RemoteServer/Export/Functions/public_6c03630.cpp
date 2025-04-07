#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03630, internal_6c03630, public_6c03630);
extern "C" NAKED register_t __cdecl internal_6c03630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4d4]
        mov dword ptr ds : [public_6c141ac], eax
        ret 
        UNREACHABLE_TRAP(0x6c03630)
    }
}
