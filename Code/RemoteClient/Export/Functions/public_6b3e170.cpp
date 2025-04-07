#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3e170, internal_6b3e170, public_6b3e170);
extern "C" NAKED register_t __cdecl internal_6b3e170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0f8]
        mov dword ptr ds : [public_6b73e14], eax
        ret 
        UNREACHABLE_TRAP(0x6b3e170)
    }
}
