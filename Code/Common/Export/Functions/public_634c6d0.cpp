#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634c6d0);

PROC_DECLARE(0x634c6d0, internal_634c6d0, public_634c6d0);
extern "C" NAKED register_t __cdecl internal_634c6d0()
{
    __asm
    {
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xAC], eax
        fstp dword ptr ds : [ecx+0xB0]
        ret 4
        UNREACHABLE_TRAP(0x634c6d0)
    }
}
