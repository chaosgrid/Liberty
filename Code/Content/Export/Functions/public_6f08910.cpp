#include "Content-PCH.h"

PROC_DECLARE(0x6f08910, internal_6f08910, public_6f08910);
extern "C" NAKED register_t __cdecl internal_6f08910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fb80ec]
        mov dword ptr ds : [public_6fd0640], eax
        ret 
        UNREACHABLE_TRAP(0x6f08910)
    }
}
