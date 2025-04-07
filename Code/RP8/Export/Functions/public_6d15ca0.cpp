#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15ca0);

PROC_DECLARE(0x6d15ca0, internal_6d15ca0, public_6d15ca0);
extern "C" NAKED register_t __cdecl internal_6d15ca0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d15ca0)
    }
}
