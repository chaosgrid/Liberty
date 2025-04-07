#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63180, internal_6b63180, public_6b63180);
extern "C" NAKED register_t __cdecl internal_6b63180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e93c]
        mov dword ptr ds : [public_6b7449c], eax
        ret 
        UNREACHABLE_TRAP(0x6b63180)
    }
}
