#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32270, internal_6b32270, public_6b32270);
extern "C" NAKED register_t __cdecl internal_6b32270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b3a0]
        mov dword ptr ds : [public_6b73898], eax
        ret 
        UNREACHABLE_TRAP(0x6b32270)
    }
}
