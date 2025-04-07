#include "Server-PCH.h"

PROC_DECLARE(0x6d5e880, internal_6d5e880, public_6d5e880);
extern "C" NAKED register_t __cdecl internal_6d5e880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64a58]
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6d5e880)
    }
}
