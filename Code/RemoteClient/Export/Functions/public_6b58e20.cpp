#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b58e20, internal_6b58e20, public_6b58e20);
extern "C" NAKED register_t __cdecl internal_6b58e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e56c]
        mov dword ptr ds : [public_6b74130], eax
        ret 
        UNREACHABLE_TRAP(0x6b58e20)
    }
}
