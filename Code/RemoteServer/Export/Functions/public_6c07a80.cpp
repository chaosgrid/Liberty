#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07a80, internal_6c07a80, public_6c07a80);
extern "C" NAKED register_t __cdecl internal_6c07a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e61c]
        mov dword ptr ds : [public_6c142c4], eax
        ret 
        UNREACHABLE_TRAP(0x6c07a80)
    }
}
