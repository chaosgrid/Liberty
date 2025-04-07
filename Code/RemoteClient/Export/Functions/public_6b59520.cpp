#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59520, internal_6b59520, public_6b59520);
extern "C" NAKED register_t __cdecl internal_6b59520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e594]
        mov dword ptr ds : [public_6b7415c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59520)
    }
}
