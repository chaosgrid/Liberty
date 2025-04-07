#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67ee0, internal_6b67ee0, public_6b67ee0);
extern "C" NAKED register_t __cdecl internal_6b67ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea74]
        mov dword ptr ds : [public_6b745d0], eax
        ret 
        UNREACHABLE_TRAP(0x6b67ee0)
    }
}
