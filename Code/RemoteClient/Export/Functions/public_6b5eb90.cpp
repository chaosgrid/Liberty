#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5eb90, internal_6b5eb90, public_6b5eb90);
extern "C" NAKED register_t __cdecl internal_6b5eb90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e760]
        mov dword ptr ds : [public_6b74320], eax
        ret 
        UNREACHABLE_TRAP(0x6b5eb90)
    }
}
