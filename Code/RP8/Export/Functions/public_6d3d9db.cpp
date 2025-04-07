#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3d9db, internal_6d3d9db, public_6d3d9db);
extern "C" NAKED register_t __cdecl internal_6d3d9db()
{
    __asm
    {
        push 1
        call public_6d404a2
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6d6cac4]
        ret 0x10
        UNREACHABLE_TRAP(0x6d3d9db)
    }
}
