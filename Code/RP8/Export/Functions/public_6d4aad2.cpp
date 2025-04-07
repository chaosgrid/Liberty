#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f05);
CLANG_FORWARD_PROC_SYMBOL(public_6d49955);
CLANG_FORWARD_PROC_SYMBOL(public_6d49fa8);
CLANG_FORWARD_PROC_SYMBOL(public_6d49fb8);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a192);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a331);
CLANG_FORWARD_PROC_SYMBOL(public_6d4aad2);

#define public_6d4ab27 _public_6d4ab27
#define public_6d4ab37 _public_6d4ab37
#define public_6d4ab7a _public_6d4ab7a
#define public_6d4ab90 _public_6d4ab90
#define public_6d4aba7 _public_6d4aba7
#define public_6d4abc5 _public_6d4abc5

PROC_DECLARE(0x6d4aad2, internal_6d4aad2, public_6d4aad2);
extern "C" NAKED register_t __cdecl internal_6d4aad2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x74
        push 1
        push esi
        call dword ptr ds : [eax]
        mov ebx, eax
        mov dword ptr ds : [esi+0x184], ebx
        xor edi, edi
        add esp, 0xC
        cmp byte ptr ss : [ebp+0xC], 0
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ds : [ebx], offset _public_6d49fa8
        mov dword ptr ds : [ebx+8], offset public_6d4aa97
        mov dword ptr ds : [ebx+0x70], edi
        je public_6d4ab90
        cmp dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi+0xC4]
        mov dword ptr ss : [ebp+8], edi
        jle public_6d4ab7a
        add ebx, 0x48
        lea edi, ds:[eax+0xC]
        mov dword ptr ss : [ebp+0xC], ebx
        public_6d4ab27 : nop
        cmp byte ptr ds : [esi+0xC8], 0
        mov eax, dword ptr ds : [edi]
        mov ecx, eax
        je public_6d4ab37
        lea ecx, ds:[ecx+ecx*2]
        public_6d4ab37 : nop
        mov ebx, dword ptr ds : [esi+4]
        push ecx
        push eax
        push dword ptr ds : [edi+0x14]
        call public_6d45f05
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [edi-4]
        push dword ptr ds : [edi+0x10]
        call public_6d45f05
        pop ecx
        pop ecx
        push eax
        push 1
        push 1
        push esi
        call dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ss : [ebp+0xC]
        add dword ptr ss : [ebp+0xC], 4
        add esp, 0x18
        inc dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp+8]
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d4ab27
        mov ebx, dword ptr ss : [ebp-4]
        public_6d4ab7a : nop
        lea eax, ds:[ebx+0x48]
        mov dword ptr ds : [ebx+4], offset _public_6d4a192
        mov dword ptr ds : [ebx+0xC], offset _public_6d4a331
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_6d4abc5
        public_6d4ab90 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0x500
        push 1
        push esi
        call dword ptr ds : [eax+4]
        add esp, 0xC
        push 0xA
        lea ecx, ds:[ebx+0x20]
        pop edx
        public_6d4aba7 : nop
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        add eax, 0x80
        dec edx
        jne public_6d4aba7
        mov dword ptr ds : [ebx+4], offset _public_6d49955
        mov dword ptr ds : [ebx+0xC], offset _public_6d49fb8
        mov dword ptr ds : [ebx+0x10], edi
        public_6d4abc5 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4aad2)
    }
}

#undef public_6d4ab27
#undef public_6d4ab37
#undef public_6d4ab7a
#undef public_6d4ab90
#undef public_6d4aba7
#undef public_6d4abc5
