#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c330, internal_6b3c330, public_6b3c330);
extern "C" NAKED register_t __cdecl internal_6b3c330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c03c]
        mov dword ptr ds : [public_6b73dac], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c330)
    }
}
