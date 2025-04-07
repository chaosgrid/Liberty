#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5eba0, internal_6b5eba0, public_6b5eba0);
extern "C" NAKED register_t __cdecl internal_6b5eba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e760]
        mov dword ptr ds : [public_6b74324], eax
        ret 
        UNREACHABLE_TRAP(0x6b5eba0)
    }
}
