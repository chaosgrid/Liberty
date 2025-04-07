#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c100, internal_6b5c100, public_6b5c100);
extern "C" NAKED register_t __cdecl internal_6b5c100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e67c]
        mov dword ptr ds : [public_6b7425c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c100)
    }
}
