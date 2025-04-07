#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b58e30, internal_6b58e30, public_6b58e30);
extern "C" NAKED register_t __cdecl internal_6b58e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e56c]
        mov dword ptr ds : [public_6b74134], eax
        ret 
        UNREACHABLE_TRAP(0x6b58e30)
    }
}
