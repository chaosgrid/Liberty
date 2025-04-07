#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ac30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x5b4bd0, internal_5b4bd0, public_5b4bd0);
extern "C" NAKED register_t __cdecl internal_5b4bd0()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+4]
        sub esp, 8
        mov dword ptr ds : [public_67ed1c], eax
        fadd st(0), st
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        push eax
        call public_42ac30
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5b4bd0)
    }
}
