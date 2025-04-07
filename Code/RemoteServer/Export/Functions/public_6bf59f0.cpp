#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf59f0, internal_6bf59f0, public_6bf59f0);
extern "C" NAKED register_t __cdecl internal_6bf59f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0f8]
        mov dword ptr ds : [public_6c13dc8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf59f0)
    }
}
