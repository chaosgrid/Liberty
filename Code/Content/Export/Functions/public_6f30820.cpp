#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f30820, internal_6f30820, public_6f30820);
extern "C" NAKED register_t __cdecl internal_6f30820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f30820)
    }
}
