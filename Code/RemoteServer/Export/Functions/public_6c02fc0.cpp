#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02fc0, internal_6c02fc0, public_6c02fc0);
extern "C" NAKED register_t __cdecl internal_6c02fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4c0]
        mov dword ptr ds : [public_6c14184], eax
        ret 
        UNREACHABLE_TRAP(0x6c02fc0)
    }
}
