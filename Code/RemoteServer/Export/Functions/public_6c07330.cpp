#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07330, internal_6c07330, public_6c07330);
extern "C" NAKED register_t __cdecl internal_6c07330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5e8]
        mov dword ptr ds : [public_6c14288], eax
        ret 
        UNREACHABLE_TRAP(0x6c07330)
    }
}
