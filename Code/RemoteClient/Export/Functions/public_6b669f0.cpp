#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b669f0, internal_6b669f0, public_6b669f0);
extern "C" NAKED register_t __cdecl internal_6b669f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea2c]
        mov dword ptr ds : [public_6b74574], eax
        ret 
        UNREACHABLE_TRAP(0x6b669f0)
    }
}
