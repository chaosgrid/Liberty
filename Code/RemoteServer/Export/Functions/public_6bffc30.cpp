#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc30, internal_6bffc30, public_6bffc30);
extern "C" NAKED register_t __cdecl internal_6bffc30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3e8]
        mov dword ptr ds : [public_6c14064], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc30)
    }
}
