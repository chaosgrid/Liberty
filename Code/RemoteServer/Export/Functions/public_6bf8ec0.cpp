#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8ec0, internal_6bf8ec0, public_6bf8ec0);
extern "C" NAKED register_t __cdecl internal_6bf8ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e248]
        mov dword ptr ds : [public_6c13ed4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8ec0)
    }
}
