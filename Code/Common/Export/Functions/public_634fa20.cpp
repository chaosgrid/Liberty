#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fa20);

PROC_DECLARE(0x634fa20, internal_634fa20, public_634fa20);
extern "C" NAKED register_t __cdecl internal_634fa20()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+8]
        fadd dword ptr ds : [ecx+0x5C]
        fstp dword ptr ds : [ecx+0x5C]
        ret 8
        UNREACHABLE_TRAP(0x634fa20)
    }
}
