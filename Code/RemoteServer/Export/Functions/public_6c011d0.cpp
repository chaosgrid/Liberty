#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c011d0, internal_6c011d0, public_6c011d0);
extern "C" NAKED register_t __cdecl internal_6c011d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e42c]
        mov dword ptr ds : [public_6c140c8], eax
        ret 
        UNREACHABLE_TRAP(0x6c011d0)
    }
}
