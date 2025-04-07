#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b4d4f0, internal_6b4d4f0, public_6b4d4f0);
extern "C" NAKED register_t __cdecl internal_6b4d4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6dce8]
        mov dword ptr ds : [public_6b73f14], eax
        ret 
        UNREACHABLE_TRAP(0x6b4d4f0)
    }
}
