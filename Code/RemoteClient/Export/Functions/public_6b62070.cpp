#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62070, internal_6b62070, public_6b62070);
extern "C" NAKED register_t __cdecl internal_6b62070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8dc]
        mov dword ptr ds : [public_6b7443c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62070)
    }
}
