#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdc3f0, internal_6bdc3f0, public_6bdc3f0);
extern "C" NAKED register_t __cdecl internal_6bdc3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb34]
        mov dword ptr ds : [public_6c13a90], eax
        ret 
        UNREACHABLE_TRAP(0x6bdc3f0)
    }
}
