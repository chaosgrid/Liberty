#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61e80, internal_6b61e80, public_6b61e80);
extern "C" NAKED register_t __cdecl internal_6b61e80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8cc]
        mov dword ptr ds : [public_6b7442c], eax
        ret 
        UNREACHABLE_TRAP(0x6b61e80)
    }
}
