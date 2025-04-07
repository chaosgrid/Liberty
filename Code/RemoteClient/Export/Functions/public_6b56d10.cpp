#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56d10, internal_6b56d10, public_6b56d10);
extern "C" NAKED register_t __cdecl internal_6b56d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e524]
        mov dword ptr ds : [public_6b740dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b56d10)
    }
}
