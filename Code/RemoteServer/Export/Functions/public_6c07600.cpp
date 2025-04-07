#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07600, internal_6c07600, public_6c07600);
extern "C" NAKED register_t __cdecl internal_6c07600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e604]
        mov dword ptr ds : [public_6c142a4], eax
        ret 
        UNREACHABLE_TRAP(0x6c07600)
    }
}
