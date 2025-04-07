#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8230, internal_6bf8230, public_6bf8230);
extern "C" NAKED register_t __cdecl internal_6bf8230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e204]
        mov dword ptr ds : [public_6c13e98], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8230)
    }
}
