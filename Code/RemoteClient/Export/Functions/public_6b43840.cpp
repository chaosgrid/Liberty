#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43840, internal_6b43840, public_6b43840);
extern "C" NAKED register_t __cdecl internal_6b43840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c24c]
        mov dword ptr ds : [public_6b73e80], eax
        ret 
        UNREACHABLE_TRAP(0x6b43840)
    }
}
