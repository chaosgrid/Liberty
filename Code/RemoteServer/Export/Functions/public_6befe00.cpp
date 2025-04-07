#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befe00, internal_6befe00, public_6befe00);
extern "C" NAKED register_t __cdecl internal_6befe00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df30]
        mov dword ptr ds : [public_6c13c4c], eax
        ret 
        UNREACHABLE_TRAP(0x6befe00)
    }
}
