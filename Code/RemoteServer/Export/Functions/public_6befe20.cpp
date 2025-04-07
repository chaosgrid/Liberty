#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befe20, internal_6befe20, public_6befe20);
extern "C" NAKED register_t __cdecl internal_6befe20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df54]
        mov dword ptr ds : [public_6c13c58], eax
        ret 
        UNREACHABLE_TRAP(0x6befe20)
    }
}
