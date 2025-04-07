#include "Server-PCH.h"

PROC_DECLARE(0x6d02b20, internal_6d02b20, public_6d02b20);
extern "C" NAKED register_t __cdecl internal_6d02b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d673d8]
        mov dword ptr ds : [public_6d8d970], eax
        ret 
        UNREACHABLE_TRAP(0x6d02b20)
    }
}
