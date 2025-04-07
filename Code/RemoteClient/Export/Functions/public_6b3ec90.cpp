#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ec90, internal_6b3ec90, public_6b3ec90);
extern "C" NAKED register_t __cdecl internal_6b3ec90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c148]
        mov dword ptr ds : [public_6b73e34], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ec90)
    }
}
