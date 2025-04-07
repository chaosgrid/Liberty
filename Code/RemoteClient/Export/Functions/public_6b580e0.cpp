#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b580e0, internal_6b580e0, public_6b580e0);
extern "C" NAKED register_t __cdecl internal_6b580e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e560]
        mov dword ptr ds : [public_6b74120], eax
        ret 
        UNREACHABLE_TRAP(0x6b580e0)
    }
}
