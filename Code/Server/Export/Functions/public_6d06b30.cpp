#include "Server-PCH.h"

PROC_DECLARE(0x6d06b30, internal_6d06b30, public_6d06b30);
extern "C" NAKED register_t __cdecl internal_6d06b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cbc]
        mov dword ptr ds : [public_6d8d9fc], eax
        ret 
        UNREACHABLE_TRAP(0x6d06b30)
    }
}
