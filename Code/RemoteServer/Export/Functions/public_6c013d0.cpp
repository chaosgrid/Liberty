#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c013d0, internal_6c013d0, public_6c013d0);
extern "C" NAKED register_t __cdecl internal_6c013d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e438]
        mov dword ptr ds : [public_6c140dc], eax
        ret 
        UNREACHABLE_TRAP(0x6c013d0)
    }
}
