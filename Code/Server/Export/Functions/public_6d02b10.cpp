#include "Server-PCH.h"

PROC_DECLARE(0x6d02b10, internal_6d02b10, public_6d02b10);
extern "C" NAKED register_t __cdecl internal_6d02b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d673d4]
        mov dword ptr ds : [public_6d8d974], eax
        ret 
        UNREACHABLE_TRAP(0x6d02b10)
    }
}
