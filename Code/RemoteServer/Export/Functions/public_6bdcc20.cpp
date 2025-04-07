#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdcc20, internal_6bdcc20, public_6bdcc20);
extern "C" NAKED register_t __cdecl internal_6bdcc20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb70]
        mov dword ptr ds : [public_6c13ab4], eax
        ret 
        UNREACHABLE_TRAP(0x6bdcc20)
    }
}
