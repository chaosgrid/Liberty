#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e750, internal_6b5e750, public_6b5e750);
extern "C" NAKED register_t __cdecl internal_6b5e750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e738]
        mov dword ptr ds : [public_6b74314], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e750)
    }
}
