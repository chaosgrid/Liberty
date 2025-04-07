#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03640, internal_6c03640, public_6c03640);
extern "C" NAKED register_t __cdecl internal_6c03640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4d8]
        mov dword ptr ds : [public_6c141a4], eax
        ret 
        UNREACHABLE_TRAP(0x6c03640)
    }
}
