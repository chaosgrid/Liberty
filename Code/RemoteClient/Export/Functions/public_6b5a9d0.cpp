#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5a9d0, internal_6b5a9d0, public_6b5a9d0);
extern "C" NAKED register_t __cdecl internal_6b5a9d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5dc]
        mov dword ptr ds : [public_6b741c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5a9d0)
    }
}
