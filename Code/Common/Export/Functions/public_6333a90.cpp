#include "Common-PCH.h"

PROC_DECLARE(0x6333a90, internal_6333a90, public_6333a90);
extern "C" NAKED register_t __cdecl internal_6333a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4a3c]
        mov dword ptr ds : [public_640a808], eax
        ret 
        UNREACHABLE_TRAP(0x6333a90)
    }
}
