#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f8ae70);
CLANG_FORWARD_PROC_SYMBOL(public_6f8af40);

#define public_6f8af54 _public_6f8af54
#define public_6f8af66 _public_6f8af66
#define public_6f8af68 _public_6f8af68
#define public_6f8af80 _public_6f8af80
#define public_6f8af96 _public_6f8af96
#define public_6f8af9a _public_6f8af9a
#define public_6f8af9f _public_6f8af9f
#define public_6f8afb4 _public_6f8afb4
#define public_6f8afb9 _public_6f8afb9
#define public_6f8afd0 _public_6f8afd0
#define public_6f8afdc _public_6f8afdc
#define public_6f8b019 _public_6f8b019

PROC_DECLARE(0x6f8af40, internal_6f8af40, public_6f8af40);
extern "C" NAKED register_t __cdecl internal_6f8af40()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x80]
        cmp eax, ecx
        push edi
        je public_6f8af66
        public_6f8af54 : nop
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [edx+0x34], edi
        je public_6f8af96
        add eax, 4
        cmp eax, ecx
        jne public_6f8af54
        public_6f8af66 : nop
        mov ebx, ecx
        public_6f8af68 : nop
        cmp ebx, ecx
        je public_6f8b019
        mov eax, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [eax]
        xor ebp, ebp
        cmp edi, eax
        je public_6f8af9f
        nop 
        lea esp, ss:[esp]
        public_6f8af80 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 5
        je public_6f8af9a
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x6C]
        jne public_6f8af80
        jmp public_6f8af9f
        public_6f8af96 : nop
        mov ebx, eax
        jmp public_6f8af68
        public_6f8af9a : nop
        mov ebp, 1
        public_6f8af9f : nop
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [ecx]
        sar eax, 2
        add eax, ebp
        test eax, eax
        jle public_6f8afb9
        public_6f8afb4 : nop
        dec eax
        mov edi, dword ptr ds : [edi]
        jne public_6f8afb4
        public_6f8afb9 : nop
        mov ecx, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [ebx]
        lea eax, ds:[ebx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edx
        je public_6f8afdc
        mov edx, ebx
        sub edx, eax
        public_6f8afd0 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f8afd0
        public_6f8afdc : nop
        mov ecx, dword ptr ds : [esi+0x80]
        add ecx, 0xFFFFFFFC
        push ecx
        mov dword ptr ds : [esi+0x80], ecx
        mov eax, esp
        push edi
        lea ecx, ds:[esi+0x64]
        mov dword ptr ds : [eax], 0
        call public_6f1cb80
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        push ecx
        mov ecx, esi
        call public_6f8ae70
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f8b019 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f8af40)
    }
}

#undef public_6f8af54
#undef public_6f8af66
#undef public_6f8af68
#undef public_6f8af80
#undef public_6f8af96
#undef public_6f8af9a
#undef public_6f8af9f
#undef public_6f8afb4
#undef public_6f8afb9
#undef public_6f8afd0
#undef public_6f8afdc
#undef public_6f8b019
