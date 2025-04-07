#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdce80, internal_6bdce80, public_6bdce80);
extern "C" NAKED register_t __cdecl internal_6bdce80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb90]
        mov dword ptr ds : [public_6c13ac4], eax
        ret 
        UNREACHABLE_TRAP(0x6bdce80)
    }
}
