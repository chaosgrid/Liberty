#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03890, internal_6c03890, public_6c03890);
extern "C" NAKED register_t __cdecl internal_6c03890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4fc]
        mov dword ptr ds : [public_6c141cc], eax
        ret 
        UNREACHABLE_TRAP(0x6c03890)
    }
}
