#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63fe0, internal_6b63fe0, public_6b63fe0);
extern "C" NAKED register_t __cdecl internal_6b63fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e974]
        mov dword ptr ds : [public_6b744d4], eax
        ret 
        UNREACHABLE_TRAP(0x6b63fe0)
    }
}
