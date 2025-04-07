#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410130);

PROC_DECLARE(0x410130, internal_410130, public_410130);
extern "C" NAKED register_t __cdecl internal_410130()
{
    __asm
    {
        fld dword ptr ds : [public_5c890c]
        mov eax, dword ptr ds : [public_5c8910]
        fadd dword ptr ds : [public_5c8910]
        mov dword ptr ds : [public_6164d0], eax
        fstp dword ptr ds : [public_6164d4]
        ret 
        UNREACHABLE_TRAP(0x410130)
    }
}
