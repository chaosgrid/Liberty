#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52c80, internal_6b52c80, public_6b52c80);
extern "C" NAKED register_t __cdecl internal_6b52c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3d8]
        mov dword ptr ds : [public_6b73f9c], eax
        ret 
        UNREACHABLE_TRAP(0x6b52c80)
    }
}
