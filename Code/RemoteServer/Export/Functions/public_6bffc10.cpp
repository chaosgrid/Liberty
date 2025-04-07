#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc10, internal_6bffc10, public_6bffc10);
extern "C" NAKED register_t __cdecl internal_6bffc10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3e4]
        mov dword ptr ds : [public_6c14068], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc10)
    }
}
