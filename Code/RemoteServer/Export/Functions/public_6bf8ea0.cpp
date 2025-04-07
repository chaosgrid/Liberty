#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8ea0, internal_6bf8ea0, public_6bf8ea0);
extern "C" NAKED register_t __cdecl internal_6bf8ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e244]
        mov dword ptr ds : [public_6c13ed8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8ea0)
    }
}
