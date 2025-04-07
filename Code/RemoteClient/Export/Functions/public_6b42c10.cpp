#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b42c10, internal_6b42c10, public_6b42c10);
extern "C" NAKED register_t __cdecl internal_6b42c10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c1f4]
        mov dword ptr ds : [public_6b73e64], eax
        ret 
        UNREACHABLE_TRAP(0x6b42c10)
    }
}
