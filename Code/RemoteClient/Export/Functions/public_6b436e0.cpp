#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b436e0, internal_6b436e0, public_6b436e0);
extern "C" NAKED register_t __cdecl internal_6b436e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c22c]
        mov dword ptr ds : [public_6b73e70], eax
        ret 
        UNREACHABLE_TRAP(0x6b436e0)
    }
}
