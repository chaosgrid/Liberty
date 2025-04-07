#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b402d0, internal_6b402d0, public_6b402d0);
extern "C" NAKED register_t __cdecl internal_6b402d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c1b0]
        mov dword ptr ds : [public_6b73e50], eax
        ret 
        UNREACHABLE_TRAP(0x6b402d0)
    }
}
