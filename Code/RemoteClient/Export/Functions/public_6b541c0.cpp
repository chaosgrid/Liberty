#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b541c0, internal_6b541c0, public_6b541c0);
extern "C" NAKED register_t __cdecl internal_6b541c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e41c]
        mov dword ptr ds : [public_6b74000], eax
        ret 
        UNREACHABLE_TRAP(0x6b541c0)
    }
}
