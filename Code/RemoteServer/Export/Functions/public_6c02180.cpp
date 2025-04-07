#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02180, internal_6c02180, public_6c02180);
extern "C" NAKED register_t __cdecl internal_6c02180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e46c]
        mov dword ptr ds : [public_6c14114], eax
        ret 
        UNREACHABLE_TRAP(0x6c02180)
    }
}
