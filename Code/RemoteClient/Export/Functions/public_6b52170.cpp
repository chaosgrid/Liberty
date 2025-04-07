#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52170, internal_6b52170, public_6b52170);
extern "C" NAKED register_t __cdecl internal_6b52170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3a4]
        mov dword ptr ds : [public_6b73f60], eax
        ret 
        UNREACHABLE_TRAP(0x6b52170)
    }
}
