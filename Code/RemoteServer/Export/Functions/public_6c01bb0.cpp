#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01bb0, internal_6c01bb0, public_6c01bb0);
extern "C" NAKED register_t __cdecl internal_6c01bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e460]
        mov dword ptr ds : [public_6c14104], eax
        ret 
        UNREACHABLE_TRAP(0x6c01bb0)
    }
}
