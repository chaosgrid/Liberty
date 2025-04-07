#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef1a0, internal_6bef1a0, public_6bef1a0);
extern "C" NAKED register_t __cdecl internal_6bef1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dee0]
        mov dword ptr ds : [public_6c13c1c], eax
        ret 
        UNREACHABLE_TRAP(0x6bef1a0)
    }
}
