#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c04a00, internal_6c04a00, public_6c04a00);
extern "C" NAKED register_t __cdecl internal_6c04a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e58c]
        mov dword ptr ds : [public_6c14204], eax
        ret 
        UNREACHABLE_TRAP(0x6c04a00)
    }
}
