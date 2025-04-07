#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d732d);
CLANG_FORWARD_PROC_SYMBOL(public_65d8e90);

#define public_65d8ecf _public_65d8ecf

PROC_DECLARE(0x65d8e90, internal_65d8e90, public_65d8e90);
extern "C" NAKED register_t __cdecl internal_65d8e90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebp
        push dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebp, dword ptr ss : [ebp-4]
        call public_65d732d
        push esi
        push edi
        call eax
        pop edi
        pop esi
        mov ebx, ebp
        pop ebp
        mov ecx, dword ptr ss : [ebp+0x10]
        push ebp
        mov ebp, ebx
        cmp ecx, 0x100
        jne public_65d8ecf
        mov ecx, 2
        public_65d8ecf : nop
        push ecx
        call public_65d732d
        pop ebp
        pop ecx
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x65d8e90)
    }
}

#undef public_65d8ecf
