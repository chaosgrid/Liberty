#include "Server-PCH.h"

PROC_DECLARE(0x6d5b100, internal_6d5b100, public_6d5b100);
extern "C" NAKED register_t __cdecl internal_6d5b100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9ac]
        mov dword ptr ds : [public_6d90444], eax
        ret 
        UNREACHABLE_TRAP(0x6d5b100)
    }
}
