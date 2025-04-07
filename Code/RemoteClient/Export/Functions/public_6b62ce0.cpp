#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62ce0, internal_6b62ce0, public_6b62ce0);
extern "C" NAKED register_t __cdecl internal_6b62ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e91c]
        mov dword ptr ds : [public_6b7447c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62ce0)
    }
}
