#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b45770, internal_6b45770, public_6b45770);
extern "C" NAKED register_t __cdecl internal_6b45770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2dc]
        mov dword ptr ds : [public_6b73ed0], eax
        ret 
        UNREACHABLE_TRAP(0x6b45770)
    }
}
