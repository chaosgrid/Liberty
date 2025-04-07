#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf21a0, internal_6bf21a0, public_6bf21a0);
extern "C" NAKED register_t __cdecl internal_6bf21a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfc8]
        mov dword ptr ds : [public_6c13cc4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf21a0)
    }
}
