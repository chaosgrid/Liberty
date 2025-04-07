#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b387a0, internal_6b387a0, public_6b387a0);
extern "C" NAKED register_t __cdecl internal_6b387a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b858]
        mov dword ptr ds : [public_6b73d68], eax
        ret 
        UNREACHABLE_TRAP(0x6b387a0)
    }
}
