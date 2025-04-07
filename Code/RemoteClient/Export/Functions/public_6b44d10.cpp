#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44d10, internal_6b44d10, public_6b44d10);
extern "C" NAKED register_t __cdecl internal_6b44d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2a0]
        mov dword ptr ds : [public_6b73eac], eax
        ret 
        UNREACHABLE_TRAP(0x6b44d10)
    }
}
