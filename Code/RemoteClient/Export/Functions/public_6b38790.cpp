#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38790, internal_6b38790, public_6b38790);
extern "C" NAKED register_t __cdecl internal_6b38790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b858]
        mov dword ptr ds : [public_6b73d6c], eax
        ret 
        UNREACHABLE_TRAP(0x6b38790)
    }
}
