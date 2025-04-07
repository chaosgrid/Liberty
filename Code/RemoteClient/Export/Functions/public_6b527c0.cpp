#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b527c0, internal_6b527c0, public_6b527c0);
extern "C" NAKED register_t __cdecl internal_6b527c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3c8]
        mov dword ptr ds : [public_6b73f90], eax
        ret 
        UNREACHABLE_TRAP(0x6b527c0)
    }
}
