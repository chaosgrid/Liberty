#include "Freelancer-PCH.h"

PROC_DECLARE(0x489a20, internal_489a20, public_489a20);
extern "C" NAKED register_t __cdecl internal_489a20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d244c]
        mov dword ptr ds : [public_671f68], eax
        ret 
        UNREACHABLE_TRAP(0x489a20)
    }
}
