#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5fc60, internal_6b5fc60, public_6b5fc60);
extern "C" NAKED register_t __cdecl internal_6b5fc60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e790]
        mov dword ptr ds : [public_6b74350], eax
        ret 
        UNREACHABLE_TRAP(0x6b5fc60)
    }
}
