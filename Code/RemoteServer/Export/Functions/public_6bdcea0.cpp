#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdcea0, internal_6bdcea0, public_6bdcea0);
extern "C" NAKED register_t __cdecl internal_6bdcea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb94]
        mov dword ptr ds : [public_6c13ac0], eax
        ret 
        UNREACHABLE_TRAP(0x6bdcea0)
    }
}
