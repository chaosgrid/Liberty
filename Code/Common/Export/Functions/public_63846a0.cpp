#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6384610);
CLANG_FORWARD_PROC_SYMBOL(public_63846a0);

PROC_DECLARE(0x63846a0, internal_63846a0, public_63846a0);
extern "C" NAKED register_t __cdecl internal_63846a0()
{
    __asm
    {
        push ecx
        call public_6384610
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        fmul qword ptr ds : [public_658b1b8]
        fadd qword ptr ds : [public_658b1c0]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63846a0)
    }
}
