#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02500, internal_6c02500, public_6c02500);
extern "C" NAKED register_t __cdecl internal_6c02500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e474]
        mov dword ptr ds : [public_6c14128], eax
        ret 
        UNREACHABLE_TRAP(0x6c02500)
    }
}
