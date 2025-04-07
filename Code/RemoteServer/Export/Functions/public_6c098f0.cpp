#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c098f0, internal_6c098f0, public_6c098f0);
extern "C" NAKED register_t __cdecl internal_6c098f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e658]
        mov dword ptr ds : [public_6c14314], eax
        ret 
        UNREACHABLE_TRAP(0x6c098f0)
    }
}
