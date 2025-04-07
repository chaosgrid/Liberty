#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e760, internal_6b5e760, public_6b5e760);
extern "C" NAKED register_t __cdecl internal_6b5e760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e73c]
        mov dword ptr ds : [public_6b7430c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e760)
    }
}
