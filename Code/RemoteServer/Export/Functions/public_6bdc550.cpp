#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdc550, internal_6bdc550, public_6bdc550);
extern "C" NAKED register_t __cdecl internal_6bdc550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb54]
        mov dword ptr ds : [public_6c13aa0], eax
        ret 
        UNREACHABLE_TRAP(0x6bdc550)
    }
}
