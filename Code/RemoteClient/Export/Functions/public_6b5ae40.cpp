#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ae40, internal_6b5ae40, public_6b5ae40);
extern "C" NAKED register_t __cdecl internal_6b5ae40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5e8]
        mov dword ptr ds : [public_6b741d0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ae40)
    }
}
