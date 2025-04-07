#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ce0, internal_6b69ce0, public_6b69ce0);
extern "C" NAKED register_t __cdecl internal_6b69ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eac0]
        mov dword ptr ds : [public_6b7462c], eax
        ret 
        UNREACHABLE_TRAP(0x6b69ce0)
    }
}
