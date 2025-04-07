#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e210, internal_6b5e210, public_6b5e210);
extern "C" NAKED register_t __cdecl internal_6b5e210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e708]
        mov dword ptr ds : [public_6b742e4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e210)
    }
}
