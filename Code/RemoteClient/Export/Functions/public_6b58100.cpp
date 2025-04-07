#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b58100, internal_6b58100, public_6b58100);
extern "C" NAKED register_t __cdecl internal_6b58100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e564]
        mov dword ptr ds : [public_6b7411c], eax
        ret 
        UNREACHABLE_TRAP(0x6b58100)
    }
}
