#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c058f0, internal_6c058f0, public_6c058f0);
extern "C" NAKED register_t __cdecl internal_6c058f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5a0]
        mov dword ptr ds : [public_6c1422c], eax
        ret 
        UNREACHABLE_TRAP(0x6c058f0)
    }
}
