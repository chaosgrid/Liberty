#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4194e0);

PROC_DECLARE(0x4194e0, internal_4194e0, public_4194e0);
extern "C" NAKED register_t __cdecl internal_4194e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [ecx+4]
        fdivp 
        ret 4
        UNREACHABLE_TRAP(0x4194e0)
    }
}
