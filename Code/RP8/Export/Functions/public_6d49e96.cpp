#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49958);
CLANG_FORWARD_PROC_SYMBOL(public_6d49e96);

#define public_6d49ecf _public_6d49ecf
#define public_6d49ef3 _public_6d49ef3
#define public_6d49f05 _public_6d49f05
#define public_6d49f10 _public_6d49f10
#define public_6d49f28 _public_6d49f28
#define public_6d49f2b _public_6d49f2b
#define public_6d49f64 _public_6d49f64

PROC_DECLARE(0x6d49e96, internal_6d49e96, public_6d49e96);
extern "C" NAKED register_t __cdecl internal_6d49e96()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x50
        push 1
        push esi
        call dword ptr ds : [eax]
        mov ebx, eax
        add esp, 0xC
        cmp byte ptr ss : [ebp+0xC], 0
        mov dword ptr ds : [esi+0x180], ebx
        mov dword ptr ds : [ebx], offset public_6d49e2e
        je public_6d49ecf
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 4
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d49ecf : nop
        mov eax, dword ptr ds : [esi+0x19C]
        cmp byte ptr ds : [eax+8], 0
        je public_6d49f05
        cmp dword ptr ds : [esi+0x114], 2
        jge public_6d49ef3
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2E
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d49ef3 : nop
        call public_6d49958
        mov ecx, dword ptr ds : [esi+0x114]
        inc ecx
        inc ecx
        mov dword ptr ss : [ebp+0xC], ecx
        jmp public_6d49f10
        public_6d49f05 : nop
        mov eax, dword ptr ds : [esi+0x114]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, eax
        public_6d49f10 : nop
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ds : [esi+0x20], 0
        mov edi, dword ptr ds : [esi+0xC4]
        jle public_6d49f64
        add edi, 0x24
        add ebx, 8
        jmp public_6d49f2b
        public_6d49f28 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6d49f2b : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi-0x18]
        imul eax, edx
        cdq 
        idiv dword ptr ds : [esi+0x114]
        mov edx, dword ptr ds : [esi+4]
        imul eax, ecx
        push eax
        mov eax, dword ptr ds : [edi-8]
        imul eax, dword ptr ds : [edi]
        push eax
        push 1
        push esi
        call dword ptr ds : [edx+8]
        add esp, 0x10
        inc dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        add ebx, 4
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d49f28
        public_6d49f64 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d49e96)
    }
}

#undef public_6d49ecf
#undef public_6d49ef3
#undef public_6d49f05
#undef public_6d49f10
#undef public_6d49f28
#undef public_6d49f2b
#undef public_6d49f64
