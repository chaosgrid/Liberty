#include "Freelancer-PCH.h"

PROC_DECLARE(0x57fd00, internal_57fd00, public_57fd00);
extern "C" NAKED register_t __cdecl internal_57fd00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e496c]
        mov dword ptr ds : [public_67c4b8], eax
        ret 
        UNREACHABLE_TRAP(0x57fd00)
    }
}
