#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c00fc0, internal_6c00fc0, public_6c00fc0);
extern "C" NAKED register_t __cdecl internal_6c00fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e414]
        mov dword ptr ds : [public_6c140ac], eax
        ret 
        UNREACHABLE_TRAP(0x6c00fc0)
    }
}
