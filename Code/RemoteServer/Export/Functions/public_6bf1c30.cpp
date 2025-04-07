#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf1c30, internal_6bf1c30, public_6bf1c30);
extern "C" NAKED register_t __cdecl internal_6bf1c30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfb8]
        mov dword ptr ds : [public_6c13cb4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf1c30)
    }
}
