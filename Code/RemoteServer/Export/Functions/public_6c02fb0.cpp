#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02fb0, internal_6c02fb0, public_6c02fb0);
extern "C" NAKED register_t __cdecl internal_6c02fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4bc]
        mov dword ptr ds : [public_6c1418c], eax
        ret 
        UNREACHABLE_TRAP(0x6c02fb0)
    }
}
