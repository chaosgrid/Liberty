#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5a800, internal_6b5a800, public_6b5a800);
extern "C" NAKED register_t __cdecl internal_6b5a800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5d0]
        mov dword ptr ds : [public_6b741b0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5a800)
    }
}
