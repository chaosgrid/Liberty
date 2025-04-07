#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b541f0, internal_6b541f0, public_6b541f0);
extern "C" NAKED register_t __cdecl internal_6b541f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e428]
        mov dword ptr ds : [public_6b74010], eax
        ret 
        UNREACHABLE_TRAP(0x6b541f0)
    }
}
