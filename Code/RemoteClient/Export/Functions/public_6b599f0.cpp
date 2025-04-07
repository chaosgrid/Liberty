#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b599f0, internal_6b599f0, public_6b599f0);
extern "C" NAKED register_t __cdecl internal_6b599f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5a0]
        mov dword ptr ds : [public_6b7416c], eax
        ret 
        UNREACHABLE_TRAP(0x6b599f0)
    }
}
