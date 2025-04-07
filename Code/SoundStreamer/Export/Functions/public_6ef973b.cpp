#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef973b);

#define public_6ef9771 _public_6ef9771
#define public_6ef97a3 _public_6ef97a3
#define public_6ef97b6 _public_6ef97b6
#define public_6ef97bd _public_6ef97bd

PROC_DECLARE(0x6ef973b, internal_6ef973b, public_6ef973b);
extern "C" NAKED register_t __cdecl internal_6ef973b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        push 0x20
        mov edi, dword ptr ss : [ebp+8]
        pop ebx
        or esi, 0xFFFFFFFF
        cdq 
        mov ecx, ebx
        mov dword ptr ss : [ebp-4], 3
        idiv ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0xC]
        cdq 
        idiv ecx
        and dword ptr ss : [ebp+0xC], 0
        mov ecx, edx
        shl esi, cl
        sub ebx, edx
        not esi
        public_6ef9771 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, eax
        and ecx, esi
        mov dword ptr ss : [ebp-8], ecx
        mov ecx, edx
        shr eax, cl
        or eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, ebx
        add edi, 4
        shl eax, cl
        dec dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6ef9771
        mov edi, dword ptr ss : [ebp-0xC]
        push 2
        pop ebx
        mov esi, edi
        push 8
        pop ecx
        shl esi, 2
        public_6ef97a3 : nop
        cmp ebx, edi
        jl public_6ef97b6
        mov edx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, esi
        mov eax, dword ptr ds : [eax+edx]
        mov dword ptr ds : [ecx+edx], eax
        jmp public_6ef97bd
        public_6ef97b6 : nop
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+eax], 0
        public_6ef97bd : nop
        dec ebx
        sub ecx, 4
        jns public_6ef97a3
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef973b)
    }
}

#undef public_6ef9771
#undef public_6ef97a3
#undef public_6ef97b6
#undef public_6ef97bd
