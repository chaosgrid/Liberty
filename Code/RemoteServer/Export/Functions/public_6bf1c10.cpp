#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf1c10, internal_6bf1c10, public_6bf1c10);
extern "C" NAKED register_t __cdecl internal_6bf1c10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfb4]
        mov dword ptr ds : [public_6c13cb8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf1c10)
    }
}
