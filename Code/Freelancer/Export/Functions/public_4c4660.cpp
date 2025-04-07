#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4660);

PROC_DECLARE(0x4c4660, internal_4c4660, public_4c4660);
extern "C" NAKED register_t __cdecl internal_4c4660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_673360], eax
        ret 
        UNREACHABLE_TRAP(0x4c4660)
    }
}
