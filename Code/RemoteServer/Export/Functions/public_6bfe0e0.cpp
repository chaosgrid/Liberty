#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe0e0, internal_6bfe0e0, public_6bfe0e0);
extern "C" NAKED register_t __cdecl internal_6bfe0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e390]
        mov dword ptr ds : [public_6c13ffc], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe0e0)
    }
}
