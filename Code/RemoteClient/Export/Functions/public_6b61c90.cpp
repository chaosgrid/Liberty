#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61c90, internal_6b61c90, public_6b61c90);
extern "C" NAKED register_t __cdecl internal_6b61c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8bc]
        mov dword ptr ds : [public_6b7441c], eax
        ret 
        UNREACHABLE_TRAP(0x6b61c90)
    }
}
