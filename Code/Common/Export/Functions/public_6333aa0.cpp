#include "Common-PCH.h"

PROC_DECLARE(0x6333aa0, internal_6333aa0, public_6333aa0);
extern "C" NAKED register_t __cdecl internal_6333aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4a40]
        mov dword ptr ds : [public_640a804], eax
        ret 
        UNREACHABLE_TRAP(0x6333aa0)
    }
}
