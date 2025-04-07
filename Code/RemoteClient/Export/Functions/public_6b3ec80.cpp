#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ec80, internal_6b3ec80, public_6b3ec80);
extern "C" NAKED register_t __cdecl internal_6b3ec80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c148]
        mov dword ptr ds : [public_6b73e30], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ec80)
    }
}
