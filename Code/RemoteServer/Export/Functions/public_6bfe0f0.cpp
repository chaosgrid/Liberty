#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe0f0, internal_6bfe0f0, public_6bfe0f0);
extern "C" NAKED register_t __cdecl internal_6bfe0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e394]
        mov dword ptr ds : [public_6c13ff4], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe0f0)
    }
}
