#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49c05);

#define public_6d49c26 _public_6d49c26
#define public_6d49c49 _public_6d49c49
#define public_6d49c5b _public_6d49c5b
#define public_6d49c7c _public_6d49c7c
#define public_6d49c89 _public_6d49c89
#define public_6d49c98 _public_6d49c98

PROC_DECLARE(0x6d49c05, internal_6d49c05, public_6d49c05);
extern "C" NAKED register_t __cdecl internal_6d49c05()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [esi+0x20], 0
        mov eax, dword ptr ds : [esi+0xC4]
        push ebx
        mov ebx, dword ptr ds : [esi+0x180]
        jle public_6d49c98
        push edi
        lea edi, ds:[eax+0xC]
        public_6d49c26 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        imul ecx, dword ptr ds : [edi]
        mov eax, ecx
        cdq 
        idiv dword ptr ds : [esi+0x114]
        xor edx, edx
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ds : [edi+0x20]
        div ecx
        test edx, edx
        mov dword ptr ss : [ebp-8], edx
        jne public_6d49c49
        mov dword ptr ss : [ebp-8], ecx
        public_6d49c49 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d49c5b
        mov eax, dword ptr ss : [ebp-8]
        dec eax
        cdq 
        idiv dword ptr ss : [ebp-0xC]
        inc eax
        mov dword ptr ds : [ebx+0x48], eax
        public_6d49c5b : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ebx+eax*4+0x38]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, ecx
        test ecx, ecx
        jle public_6d49c89
        mov edx, dword ptr ss : [ebp-8]
        lea eax, ds:[eax+edx*4]
        mov edx, eax
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d49c7c : nop
        mov ecx, dword ptr ds : [eax-4]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        dec dword ptr ss : [ebp-0xC]
        jne public_6d49c7c
        public_6d49c89 : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d49c26
        pop edi
        public_6d49c98 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d49c05)
    }
}

#undef public_6d49c26
#undef public_6d49c49
#undef public_6d49c5b
#undef public_6d49c7c
#undef public_6d49c89
#undef public_6d49c98
