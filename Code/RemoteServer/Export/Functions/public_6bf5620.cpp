#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5620, internal_6bf5620, public_6bf5620);
extern "C" NAKED register_t __cdecl internal_6bf5620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0d8]
        mov dword ptr ds : [public_6c13dac], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5620)
    }
}
