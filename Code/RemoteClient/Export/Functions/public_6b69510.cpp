#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69510, internal_6b69510, public_6b69510);
extern "C" NAKED register_t __cdecl internal_6b69510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eab0]
        mov dword ptr ds : [public_6b74624], eax
        ret 
        UNREACHABLE_TRAP(0x6b69510)
    }
}
