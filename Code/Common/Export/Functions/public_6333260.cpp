#include "Common-PCH.h"

PROC_DECLARE(0x6333260, internal_6333260, public_6333260);
extern "C" NAKED register_t __cdecl internal_6333260()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x6333260)
    }
}
