#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d950, internal_6b3d950, public_6b3d950);
extern "C" NAKED register_t __cdecl internal_6b3d950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0dc]
        mov dword ptr ds : [public_6b73dfc], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d950)
    }
}
