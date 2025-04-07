#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59ca0, internal_6b59ca0, public_6b59ca0);
extern "C" NAKED register_t __cdecl internal_6b59ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5b8]
        mov dword ptr ds : [public_6b7418c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59ca0)
    }
}
