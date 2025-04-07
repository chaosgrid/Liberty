#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62620, internal_6b62620, public_6b62620);
extern "C" NAKED register_t __cdecl internal_6b62620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8e8]
        mov dword ptr ds : [public_6b74454], eax
        ret 
        UNREACHABLE_TRAP(0x6b62620)
    }
}
