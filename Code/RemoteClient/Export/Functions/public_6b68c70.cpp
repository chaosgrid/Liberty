#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68c70, internal_6b68c70, public_6b68c70);
extern "C" NAKED register_t __cdecl internal_6b68c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eaa4]
        mov dword ptr ds : [public_6b74614], eax
        ret 
        UNREACHABLE_TRAP(0x6b68c70)
    }
}
