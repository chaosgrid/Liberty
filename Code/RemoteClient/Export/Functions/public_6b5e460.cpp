#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e460, internal_6b5e460, public_6b5e460);
extern "C" NAKED register_t __cdecl internal_6b5e460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e718]
        mov dword ptr ds : [public_6b742f0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e460)
    }
}
