#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07ed0, internal_6c07ed0, public_6c07ed0);
extern "C" NAKED register_t __cdecl internal_6c07ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e624]
        mov dword ptr ds : [public_6c142d8], eax
        ret 
        UNREACHABLE_TRAP(0x6c07ed0)
    }
}
