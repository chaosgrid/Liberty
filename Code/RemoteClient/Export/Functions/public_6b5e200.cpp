#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e200, internal_6b5e200, public_6b5e200);
extern "C" NAKED register_t __cdecl internal_6b5e200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e708]
        mov dword ptr ds : [public_6b742e0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e200)
    }
}
