#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02160, internal_6c02160, public_6c02160);
extern "C" NAKED register_t __cdecl internal_6c02160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e468]
        mov dword ptr ds : [public_6c14118], eax
        ret 
        UNREACHABLE_TRAP(0x6c02160)
    }
}
