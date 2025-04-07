#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59f30, internal_6b59f30, public_6b59f30);
extern "C" NAKED register_t __cdecl internal_6b59f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5c0]
        mov dword ptr ds : [public_6b741a0], eax
        ret 
        UNREACHABLE_TRAP(0x6b59f30)
    }
}
