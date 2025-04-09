#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e5a0);

PROC_DECLARE(0x59e5a0, internal_59e5a0, public_59e5a0);
extern "C" NAKED register_t __cdecl internal_59e5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x59e5a0)
    }
}
