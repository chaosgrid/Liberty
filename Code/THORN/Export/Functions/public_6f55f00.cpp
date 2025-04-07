#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);

PROC_DECLARE(0x6f55f00, internal_6f55f00, public_6f55f00);
extern "C" NAKED register_t __cdecl internal_6f55f00()
{
    __asm
    {
        push ecx
        call dword ptr ds : [public_6f5a120]
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        sub esp, 8
        fmul qword ptr ds : [public_6f5b458]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f55f00)
    }
}
