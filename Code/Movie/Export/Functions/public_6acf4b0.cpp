#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf504);
CLANG_FORWARD_PROC_SYMBOL(public_6ad12b0);

PROC_DECLARE(0x6acf4b0, internal_6acf4b0, public_6acf4b0);
extern "C" NAKED register_t __cdecl internal_6acf4b0()
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
        mov dword ptr ss : [ebp-0x10], offset _public_6acf504
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
        call public_6ad12b0
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr fs : [0], eax
        mov eax, ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6acf4b0)
    }
}
