#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32280, internal_6b32280, public_6b32280);
extern "C" NAKED register_t __cdecl internal_6b32280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b3a4]
        mov dword ptr ds : [public_6b737c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b32280)
    }
}
