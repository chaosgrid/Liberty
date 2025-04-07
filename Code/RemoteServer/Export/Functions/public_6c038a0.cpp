#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c038a0, internal_6c038a0, public_6c038a0);
extern "C" NAKED register_t __cdecl internal_6c038a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e500]
        mov dword ptr ds : [public_6c141c4], eax
        ret 
        UNREACHABLE_TRAP(0x6c038a0)
    }
}
