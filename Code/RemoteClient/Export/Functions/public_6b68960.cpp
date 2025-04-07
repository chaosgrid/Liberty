#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68960, internal_6b68960, public_6b68960);
extern "C" NAKED register_t __cdecl internal_6b68960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea98]
        mov dword ptr ds : [public_6b74604], eax
        ret 
        UNREACHABLE_TRAP(0x6b68960)
    }
}
