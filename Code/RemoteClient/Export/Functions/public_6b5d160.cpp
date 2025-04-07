#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d160, internal_6b5d160, public_6b5d160);
extern "C" NAKED register_t __cdecl internal_6b5d160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6cc]
        mov dword ptr ds : [public_6b7429c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d160)
    }
}
