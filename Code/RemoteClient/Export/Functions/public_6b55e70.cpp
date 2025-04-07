#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55e70, internal_6b55e70, public_6b55e70);
extern "C" NAKED register_t __cdecl internal_6b55e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4a8]
        mov dword ptr ds : [public_6b7409c], eax
        ret 
        UNREACHABLE_TRAP(0x6b55e70)
    }
}
