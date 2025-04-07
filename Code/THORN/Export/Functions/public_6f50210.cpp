#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e0d0);

PROC_DECLARE(0x6f50210, internal_6f50210, public_6f50210);
extern "C" NAKED register_t __cdecl internal_6f50210()
{
    __asm
    {
        push ecx
        call public_6f4e0d0
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f50210)
    }
}
