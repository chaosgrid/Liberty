#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d703f);
CLANG_FORWARD_PROC_SYMBOL(public_65d7093);
CLANG_FORWARD_PROC_SYMBOL(public_65d8e90);

PROC_DECLARE(0x65d703f, internal_65d703f, public_65d703f);
extern "C" NAKED register_t __cdecl internal_65d703f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0xC]
        and dword ptr ss : [ebp-0x14], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x10], offset _public_65d7093
        inc eax
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr fs : [0]
        mov dword ptr ss : [ebp-0x14], eax
        lea eax, ss:[ebp-0x14]
        mov dword ptr fs : [0], eax
        push dword ptr ss : [ebp+0x18]
        push ecx
        push dword ptr ss : [ebp+0x10]
        call public_65d8e90
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr fs : [0], eax
        mov eax, ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d703f)
    }
}
