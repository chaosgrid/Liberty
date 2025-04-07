#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befe40, internal_6befe40, public_6befe40);
extern "C" NAKED register_t __cdecl internal_6befe40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df58]
        mov dword ptr ds : [public_6c13c54], eax
        ret 
        UNREACHABLE_TRAP(0x6befe40)
    }
}
