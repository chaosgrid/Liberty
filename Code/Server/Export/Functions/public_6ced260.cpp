#include "Server-PCH.h"

PROC_DECLARE(0x6ced260, internal_6ced260, public_6ced260);
extern "C" NAKED register_t __cdecl internal_6ced260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65730]
        mov dword ptr ds : [public_6d8d6f4], eax
        ret 
        UNREACHABLE_TRAP(0x6ced260)
    }
}
