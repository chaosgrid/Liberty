#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5fc80, internal_6b5fc80, public_6b5fc80);
extern "C" NAKED register_t __cdecl internal_6b5fc80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e794]
        mov dword ptr ds : [public_6b7434c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5fc80)
    }
}
