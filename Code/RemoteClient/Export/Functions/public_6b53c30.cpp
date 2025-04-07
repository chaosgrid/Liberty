#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53c30, internal_6b53c30, public_6b53c30);
extern "C" NAKED register_t __cdecl internal_6b53c30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e404]
        mov dword ptr ds : [public_6b73fe0], eax
        ret 
        UNREACHABLE_TRAP(0x6b53c30)
    }
}
