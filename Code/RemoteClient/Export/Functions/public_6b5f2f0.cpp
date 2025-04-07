#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5f2f0, internal_6b5f2f0, public_6b5f2f0);
extern "C" NAKED register_t __cdecl internal_6b5f2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e770]
        mov dword ptr ds : [public_6b74330], eax
        ret 
        UNREACHABLE_TRAP(0x6b5f2f0)
    }
}
