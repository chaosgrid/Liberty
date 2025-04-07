#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60f90, internal_6b60f90, public_6b60f90);
extern "C" NAKED register_t __cdecl internal_6b60f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e81c]
        mov dword ptr ds : [public_6b743c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b60f90)
    }
}
