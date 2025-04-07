#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c08180, internal_6c08180, public_6c08180);
extern "C" NAKED register_t __cdecl internal_6c08180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e630]
        mov dword ptr ds : [public_6c142e8], eax
        ret 
        UNREACHABLE_TRAP(0x6c08180)
    }
}
