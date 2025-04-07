#include "Server-PCH.h"

PROC_DECLARE(0x6d5f970, internal_6d5f970, public_6d5f970);
extern "C" NAKED register_t __cdecl internal_6d5f970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb38]
        mov dword ptr ds : [public_6d90494], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f970)
    }
}
