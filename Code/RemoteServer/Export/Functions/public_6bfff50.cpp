#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfff50, internal_6bfff50, public_6bfff50);
extern "C" NAKED register_t __cdecl internal_6bfff50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3fc]
        mov dword ptr ds : [public_6c14088], eax
        ret 
        UNREACHABLE_TRAP(0x6bfff50)
    }
}
