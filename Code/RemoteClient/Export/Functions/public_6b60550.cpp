#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60550, internal_6b60550, public_6b60550);
extern "C" NAKED register_t __cdecl internal_6b60550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7e0]
        mov dword ptr ds : [public_6b7437c], eax
        ret 
        UNREACHABLE_TRAP(0x6b60550)
    }
}
