#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b527e0, internal_6b527e0, public_6b527e0);
extern "C" NAKED register_t __cdecl internal_6b527e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3cc]
        mov dword ptr ds : [public_6b73f8c], eax
        ret 
        UNREACHABLE_TRAP(0x6b527e0)
    }
}
