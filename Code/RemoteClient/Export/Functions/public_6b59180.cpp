#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59180, internal_6b59180, public_6b59180);
extern "C" NAKED register_t __cdecl internal_6b59180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e578]
        mov dword ptr ds : [public_6b74144], eax
        ret 
        UNREACHABLE_TRAP(0x6b59180)
    }
}
