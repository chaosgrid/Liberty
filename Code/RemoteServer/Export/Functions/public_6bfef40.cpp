#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfef40, internal_6bfef40, public_6bfef40);
extern "C" NAKED register_t __cdecl internal_6bfef40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3c4]
        mov dword ptr ds : [public_6c14034], eax
        ret 
        UNREACHABLE_TRAP(0x6bfef40)
    }
}
