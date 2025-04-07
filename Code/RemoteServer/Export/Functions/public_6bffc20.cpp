#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc20, internal_6bffc20, public_6bffc20);
extern "C" NAKED register_t __cdecl internal_6bffc20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3e4]
        mov dword ptr ds : [public_6c1406c], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc20)
    }
}
