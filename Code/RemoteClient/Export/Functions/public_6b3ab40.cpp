#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ab40, internal_6b3ab40, public_6b3ab40);
extern "C" NAKED register_t __cdecl internal_6b3ab40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf4c]
        mov dword ptr ds : [public_6b73d8c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ab40)
    }
}
