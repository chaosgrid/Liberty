#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d150, internal_6b5d150, public_6b5d150);
extern "C" NAKED register_t __cdecl internal_6b5d150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6c8]
        mov dword ptr ds : [public_6b742a4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d150)
    }
}
