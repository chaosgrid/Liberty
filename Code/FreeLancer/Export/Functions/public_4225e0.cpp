#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4221f0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);

PROC_DECLARE(0x4225e0, internal_4225e0, public_4225e0);
extern "C" NAKED register_t __cdecl internal_4225e0()
{
    __asm
    {
        fild dword ptr ds : [public_610854]
        push 0x3F800000
        push 0xBF800000
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_610850]
        fstp dword ptr ss : [esp]
        push 0
        call public_4221f0
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4225e0)
    }
}
