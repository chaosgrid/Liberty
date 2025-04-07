#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66d20, internal_6b66d20, public_6b66d20);
extern "C" NAKED register_t __cdecl internal_6b66d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea3c]
        mov dword ptr ds : [public_6b7457c], eax
        ret 
        UNREACHABLE_TRAP(0x6b66d20)
    }
}
