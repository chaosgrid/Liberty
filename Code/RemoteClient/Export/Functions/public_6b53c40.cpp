#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53c40, internal_6b53c40, public_6b53c40);
extern "C" NAKED register_t __cdecl internal_6b53c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e404]
        mov dword ptr ds : [public_6b73fe4], eax
        ret 
        UNREACHABLE_TRAP(0x6b53c40)
    }
}
