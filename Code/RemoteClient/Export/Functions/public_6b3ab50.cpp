#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3ab50, internal_6b3ab50, public_6b3ab50);
extern "C" NAKED register_t __cdecl internal_6b3ab50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf4c]
        mov dword ptr ds : [public_6b73d90], eax
        ret 
        UNREACHABLE_TRAP(0x6b3ab50)
    }
}
