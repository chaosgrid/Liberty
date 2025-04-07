#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e08);
CLANG_FORWARD_PROC_SYMBOL(public_65d80af);
CLANG_FORWARD_PROC_SYMBOL(public_65d819c);
CLANG_FORWARD_JUMP_SYMBOL(public_65e01b0);

PROC_DECLARE(0x65d6e08, internal_65d6e08, public_65d6e08);
extern "C" NAKED register_t __cdecl internal_65d6e08()
{
    __asm
    {
        mov eax, public_65e01b0
        call public_65d819c
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ds : [esi], offset public_65e1588
        and dword ptr ss : [ebp-4], 0
        push 1
        lea ecx, ds:[esi+0xC]
        call public_65d3b40
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, esi
        call public_65d80af
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d6e08)
    }
}
