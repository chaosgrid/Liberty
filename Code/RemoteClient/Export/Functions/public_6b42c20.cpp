#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b42c20, internal_6b42c20, public_6b42c20);
extern "C" NAKED register_t __cdecl internal_6b42c20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c1f8]
        mov dword ptr ds : [public_6b73e5c], eax
        ret 
        UNREACHABLE_TRAP(0x6b42c20)
    }
}
