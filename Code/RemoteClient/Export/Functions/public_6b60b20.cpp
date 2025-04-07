#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60b20, internal_6b60b20, public_6b60b20);
extern "C" NAKED register_t __cdecl internal_6b60b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e810]
        mov dword ptr ds : [public_6b743ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b60b20)
    }
}
