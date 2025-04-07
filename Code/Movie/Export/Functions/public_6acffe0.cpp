#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0002);

PROC_DECLARE(0x6acffe0, internal_6acffe0, public_6acffe0);
extern "C" NAKED register_t __cdecl internal_6acffe0()
{
    __asm
    {
        sub esp, 0x10
        fxch 
        fstp qword ptr ss : [esp]
        fst qword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        call public_6ad0002
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6acffe0)
    }
}
