#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501c40);

PROC_DECLARE(0x501c40, internal_501c40, public_501c40);
extern "C" NAKED register_t __cdecl internal_501c40()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+4]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx]
        ret 4
        UNREACHABLE_TRAP(0x501c40)
    }
}
