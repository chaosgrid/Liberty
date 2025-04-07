#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b7c0, internal_6b5b7c0, public_6b5b7c0);
extern "C" NAKED register_t __cdecl internal_6b5b7c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e62c]
        mov dword ptr ds : [public_6b7421c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b7c0)
    }
}
