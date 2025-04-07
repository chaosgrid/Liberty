#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44c40, internal_6b44c40, public_6b44c40);
extern "C" NAKED register_t __cdecl internal_6b44c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c28c]
        mov dword ptr ds : [public_6b73ea4], eax
        ret 
        UNREACHABLE_TRAP(0x6b44c40)
    }
}
