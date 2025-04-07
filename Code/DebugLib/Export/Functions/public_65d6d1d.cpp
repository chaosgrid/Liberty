#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6d1d);
CLANG_FORWARD_PROC_SYMBOL(public_65d8028);
CLANG_FORWARD_PROC_SYMBOL(public_65d819c);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0188);

PROC_DECLARE(0x65d6d1d, internal_65d6d1d, public_65d6d1d);
extern "C" NAKED register_t __cdecl internal_65d6d1d()
{
    __asm
    {
        mov eax, public_65e0188
        call public_65d819c
        push ecx
        push ecx
        push ebx
        push esi
        lea eax, ss:[ebp-0x10]
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0x10], offset public_65e60e4
        call public_65d8028
        mov ebx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0xC]
        push 0
        mov al, byte ptr ds : [ebx]
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_65d3b40
        push dword ptr ds : [public_65e1594]
        mov ecx, edi
        push 0
        push ebx
        call public_65d4cd0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi], offset public_65e1588
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x65d6d1d)
    }
}
