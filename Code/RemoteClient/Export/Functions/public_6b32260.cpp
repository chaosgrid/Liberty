#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32260, internal_6b32260, public_6b32260);
extern "C" NAKED register_t __cdecl internal_6b32260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b3a0]
        mov dword ptr ds : [public_6b737c4], eax
        ret 
        UNREACHABLE_TRAP(0x6b32260)
    }
}
