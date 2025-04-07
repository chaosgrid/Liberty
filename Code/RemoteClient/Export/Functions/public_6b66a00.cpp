#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66a00, internal_6b66a00, public_6b66a00);
extern "C" NAKED register_t __cdecl internal_6b66a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea30]
        mov dword ptr ds : [public_6b7456c], eax
        ret 
        UNREACHABLE_TRAP(0x6b66a00)
    }
}
