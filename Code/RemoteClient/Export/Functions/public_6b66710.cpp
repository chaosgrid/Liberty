#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66710, internal_6b66710, public_6b66710);
extern "C" NAKED register_t __cdecl internal_6b66710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea24]
        mov dword ptr ds : [public_6b7455c], eax
        ret 
        UNREACHABLE_TRAP(0x6b66710)
    }
}
