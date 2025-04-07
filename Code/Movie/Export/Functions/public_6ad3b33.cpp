#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3b33);

#define public_6ad3b69 _public_6ad3b69
#define public_6ad3b9b _public_6ad3b9b
#define public_6ad3bae _public_6ad3bae
#define public_6ad3bb5 _public_6ad3bb5

PROC_DECLARE(0x6ad3b33, internal_6ad3b33, public_6ad3b33);
extern "C" NAKED register_t __cdecl internal_6ad3b33()
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
        public_6ad3b69 : nop
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
        jne public_6ad3b69
        mov edi, dword ptr ss : [ebp-0xC]
        push 2
        pop ebx
        mov esi, edi
        push 8
        pop ecx
        shl esi, 2
        public_6ad3b9b : nop
        cmp ebx, edi
        jl public_6ad3bae
        mov edx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, esi
        mov eax, dword ptr ds : [eax+edx]
        mov dword ptr ds : [ecx+edx], eax
        jmp public_6ad3bb5
        public_6ad3bae : nop
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+eax], 0
        public_6ad3bb5 : nop
        dec ebx
        sub ecx, 4
        jns public_6ad3b9b
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3b33)
    }
}

#undef public_6ad3b69
#undef public_6ad3b9b
#undef public_6ad3bae
#undef public_6ad3bb5
