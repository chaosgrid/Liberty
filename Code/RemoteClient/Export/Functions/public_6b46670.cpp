#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b46670, internal_6b46670, public_6b46670);
extern "C" NAKED register_t __cdecl internal_6b46670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2fc]
        mov dword ptr ds : [public_6b73ee0], eax
        ret 
        UNREACHABLE_TRAP(0x6b46670)
    }
}
