#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c078a0, internal_6c078a0, public_6c078a0);
extern "C" NAKED register_t __cdecl internal_6c078a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e60c]
        mov dword ptr ds : [public_6c142bc], eax
        ret 
        UNREACHABLE_TRAP(0x6c078a0)
    }
}
