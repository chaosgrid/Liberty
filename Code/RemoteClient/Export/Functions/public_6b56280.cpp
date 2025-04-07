#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56280, internal_6b56280, public_6b56280);
extern "C" NAKED register_t __cdecl internal_6b56280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4f8]
        mov dword ptr ds : [public_6b740c4], eax
        ret 
        UNREACHABLE_TRAP(0x6b56280)
    }
}
