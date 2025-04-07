#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62610, internal_6b62610, public_6b62610);
extern "C" NAKED register_t __cdecl internal_6b62610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8e8]
        mov dword ptr ds : [public_6b74450], eax
        ret 
        UNREACHABLE_TRAP(0x6b62610)
    }
}
