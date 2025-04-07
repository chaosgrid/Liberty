#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b45790, internal_6b45790, public_6b45790);
extern "C" NAKED register_t __cdecl internal_6b45790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2e0]
        mov dword ptr ds : [public_6b73ecc], eax
        ret 
        UNREACHABLE_TRAP(0x6b45790)
    }
}
