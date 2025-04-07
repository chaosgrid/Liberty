#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63ad0, internal_6b63ad0, public_6b63ad0);
extern "C" NAKED register_t __cdecl internal_6b63ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e954]
        mov dword ptr ds : [public_6b744b0], eax
        ret 
        UNREACHABLE_TRAP(0x6b63ad0)
    }
}
