#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e480, internal_6b5e480, public_6b5e480);
extern "C" NAKED register_t __cdecl internal_6b5e480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e71c]
        mov dword ptr ds : [public_6b742ec], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e480)
    }
}
