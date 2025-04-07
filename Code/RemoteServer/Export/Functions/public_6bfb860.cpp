#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb860, internal_6bfb860, public_6bfb860);
extern "C" NAKED register_t __cdecl internal_6bfb860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2f0]
        mov dword ptr ds : [public_6c13f64], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb860)
    }
}
