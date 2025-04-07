#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60740, internal_6b60740, public_6b60740);
extern "C" NAKED register_t __cdecl internal_6b60740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7f0]
        mov dword ptr ds : [public_6b7438c], eax
        ret 
        UNREACHABLE_TRAP(0x6b60740)
    }
}
