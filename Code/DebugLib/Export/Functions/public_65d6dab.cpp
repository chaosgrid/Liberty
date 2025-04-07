#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6dab);
CLANG_FORWARD_PROC_SYMBOL(public_65d8065);
CLANG_FORWARD_PROC_SYMBOL(public_65d819c);
CLANG_FORWARD_JUMP_SYMBOL(public_65e01b0);

PROC_DECLARE(0x65d6dab, internal_65d6dab, public_65d6dab);
extern "C" NAKED register_t __cdecl internal_65d6dab()
{
    __asm
    {
        mov eax, public_65e01b0
        call public_65d819c
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [ebp-0x10], esi
        call public_65d8065
        mov al, byte ptr ds : [ebx+0xC]
        and dword ptr ss : [ebp-4], 0
        add ebx, 0xC
        lea edi, ds:[esi+0xC]
        push 0
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
        UNREACHABLE_TRAP(0x65d6dab)
    }
}
