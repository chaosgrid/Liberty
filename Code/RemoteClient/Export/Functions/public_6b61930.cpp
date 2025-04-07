#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61930, internal_6b61930, public_6b61930);
extern "C" NAKED register_t __cdecl internal_6b61930()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e860]
        mov dword ptr ds : [public_6b743fc], eax
        ret 
        UNREACHABLE_TRAP(0x6b61930)
    }
}
