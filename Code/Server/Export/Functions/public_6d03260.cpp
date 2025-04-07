#include "Server-PCH.h"

PROC_DECLARE(0x6d03260, internal_6d03260, public_6d03260);
extern "C" NAKED register_t __cdecl internal_6d03260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67734]
        mov dword ptr ds : [public_6d8d994], eax
        ret 
        UNREACHABLE_TRAP(0x6d03260)
    }
}
