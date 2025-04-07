#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3b700, internal_6b3b700, public_6b3b700);
extern "C" NAKED register_t __cdecl internal_6b3b700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf68]
        mov dword ptr ds : [public_6b73d9c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3b700)
    }
}
