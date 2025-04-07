#include "Server-PCH.h"

PROC_DECLARE(0x6d06b20, internal_6d06b20, public_6d06b20);
extern "C" NAKED register_t __cdecl internal_6d06b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cb8]
        mov dword ptr ds : [public_6d8da00], eax
        ret 
        UNREACHABLE_TRAP(0x6d06b20)
    }
}
