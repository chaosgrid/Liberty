#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54980, internal_6b54980, public_6b54980);
extern "C" NAKED register_t __cdecl internal_6b54980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e440]
        mov dword ptr ds : [public_6b74034], eax
        ret 
        UNREACHABLE_TRAP(0x6b54980)
    }
}
