#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3b50, internal_6bf3b50, public_6bf3b50);
extern "C" NAKED register_t __cdecl internal_6bf3b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e03c]
        mov dword ptr ds : [public_6c13d2c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3b50)
    }
}
