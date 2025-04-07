#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb480, internal_6bfb480, public_6bfb480);
extern "C" NAKED register_t __cdecl internal_6bfb480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2dc]
        mov dword ptr ds : [public_6c13f58], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb480)
    }
}
