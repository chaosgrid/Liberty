#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe670, internal_6bfe670, public_6bfe670);
extern "C" NAKED register_t __cdecl internal_6bfe670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3ac]
        mov dword ptr ds : [public_6c14014], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe670)
    }
}
