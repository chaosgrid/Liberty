#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07340, internal_6c07340, public_6c07340);
extern "C" NAKED register_t __cdecl internal_6c07340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5e8]
        mov dword ptr ds : [public_6c1428c], eax
        ret 
        UNREACHABLE_TRAP(0x6c07340)
    }
}
