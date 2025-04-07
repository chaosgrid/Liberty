#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d580);

PROC_DECLARE(0x59d580, internal_59d580, public_59d580);
extern "C" NAKED register_t __cdecl internal_59d580()
{
    __asm
    {
        fld dword ptr ds : [public_5e5dc4]
        mov byte ptr ds : [public_67dce4], 0
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [public_67dce8]
        ret 
        UNREACHABLE_TRAP(0x59d580)
    }
}
