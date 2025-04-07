#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ecd0, internal_6b3ecd0, public_6b3ecd0);
extern "C" NAKED register_t __cdecl internal_6b3ecd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c168]
        mov dword ptr ds : [public_6b73e40], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ecd0)
    }
}
