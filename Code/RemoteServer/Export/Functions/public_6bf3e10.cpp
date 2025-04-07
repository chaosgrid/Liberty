#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3e10, internal_6bf3e10, public_6bf3e10);
extern "C" NAKED register_t __cdecl internal_6bf3e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e04c]
        mov dword ptr ds : [public_6c13d38], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3e10)
    }
}
