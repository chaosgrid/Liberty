#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43ec0, internal_6b43ec0, public_6b43ec0);
extern "C" NAKED register_t __cdecl internal_6b43ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c270]
        mov dword ptr ds : [public_6b73e8c], eax
        ret 
        UNREACHABLE_TRAP(0x6b43ec0)
    }
}
