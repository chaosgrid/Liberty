#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ab60, internal_6b3ab60, public_6b3ab60);
extern "C" NAKED register_t __cdecl internal_6b3ab60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf50]
        mov dword ptr ds : [public_6b73d88], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ab60)
    }
}
