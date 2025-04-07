#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b45780, internal_6b45780, public_6b45780);
extern "C" NAKED register_t __cdecl internal_6b45780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2dc]
        mov dword ptr ds : [public_6b73ed4], eax
        ret 
        UNREACHABLE_TRAP(0x6b45780)
    }
}
