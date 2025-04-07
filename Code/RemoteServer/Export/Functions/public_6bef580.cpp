#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef580, internal_6bef580, public_6bef580);
extern "C" NAKED register_t __cdecl internal_6bef580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0def0]
        mov dword ptr ds : [public_6c13c28], eax
        ret 
        UNREACHABLE_TRAP(0x6bef580)
    }
}
