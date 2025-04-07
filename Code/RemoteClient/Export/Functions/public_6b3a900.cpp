#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3a900, internal_6b3a900, public_6b3a900);
extern "C" NAKED register_t __cdecl internal_6b3a900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf34]
        mov dword ptr ds : [public_6b73d78], eax
        ret 
        UNREACHABLE_TRAP(0x6b3a900)
    }
}
