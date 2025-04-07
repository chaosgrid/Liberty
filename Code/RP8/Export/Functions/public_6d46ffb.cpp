#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45ef5);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f8a);
CLANG_FORWARD_PROC_SYMBOL(public_6d46ffb);

#define public_6d47023 _public_6d47023
#define public_6d4705b _public_6d4705b
#define public_6d4708a _public_6d4708a
#define public_6d470b6 _public_6d470b6
#define public_6d470c5 _public_6d470c5
#define public_6d470db _public_6d470db
#define public_6d470f2 _public_6d470f2
#define public_6d47121 _public_6d47121
#define public_6d47135 _public_6d47135
#define public_6d47145 _public_6d47145
#define public_6d4718b _public_6d4718b
#define public_6d471ae _public_6d471ae
#define public_6d471b6 _public_6d471b6
#define public_6d471b9 _public_6d471b9
#define public_6d471c4 _public_6d471c4
#define public_6d471c7 _public_6d471c7
#define public_6d471e0 _public_6d471e0
#define public_6d471e7 _public_6d471e7

PROC_DECLARE(0x6d46ffb, internal_6d46ffb, public_6d46ffb);
extern "C" NAKED register_t __cdecl internal_6d46ffb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi+0x10], 0xCA
        je public_6d47023
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d47023 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x30]
        push ebx
        push edi
        mov edx, eax
        shl edx, 3
        cmp edx, ecx
        push 8
        pop edi
        ja public_6d4705b
        push edi
        push dword ptr ds : [esi+0x18]
        call public_6d45ef5
        push edi
        push dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x5C], eax
        call public_6d45ef5
        add esp, 0x10
        mov dword ptr ds : [esi+0x114], 1
        jmp public_6d470c5
        public_6d4705b : nop
        mov edx, eax
        shl edx, 2
        cmp edx, ecx
        ja public_6d4708a
        push 4
        push dword ptr ds : [esi+0x18]
        call public_6d45ef5
        push 4
        push dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x5C], eax
        call public_6d45ef5
        add esp, 0x10
        mov dword ptr ds : [esi+0x114], 2
        jmp public_6d470c5
        public_6d4708a : nop
        add eax, eax
        cmp eax, ecx
        ja public_6d470b6
        push 2
        push dword ptr ds : [esi+0x18]
        call public_6d45ef5
        push 2
        push dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x5C], eax
        call public_6d45ef5
        add esp, 0x10
        mov dword ptr ds : [esi+0x114], 4
        jmp public_6d470c5
        public_6d470b6 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x114], edi
        public_6d470c5 : nop
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [esi+0x20], 0
        mov dword ptr ds : [esi+0x60], eax
        mov eax, dword ptr ds : [esi+0xC4]
        jle public_6d47135
        add eax, 0xC
        public_6d470db : nop
        mov edx, dword ptr ds : [esi+0x114]
        cmp edx, 8
        mov dword ptr ss : [ebp+8], edx
        jge public_6d47121
        mov ecx, dword ptr ds : [esi+0x10C]
        imul ecx, edx
        public_6d470f2 : nop
        mov edi, dword ptr ds : [eax-4]
        imul edi, dword ptr ss : [ebp+8]
        shl edi, 1
        cmp edi, ecx
        jg public_6d47121
        mov ebx, dword ptr ds : [eax]
        imul ebx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [esi+0x110]
        imul edi, edx
        shl ebx, 1
        cmp ebx, edi
        jg public_6d47121
        mov edi, dword ptr ss : [ebp+8]
        add edi, edi
        cmp edi, 8
        mov dword ptr ss : [ebp+8], edi
        jl public_6d470f2
        public_6d47121 : nop
        mov ecx, dword ptr ss : [ebp+8]
        inc dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ss : [ebp-4]
        add eax, 0x54
        cmp ecx, dword ptr ds : [esi+0x20]
        jl public_6d470db
        public_6d47135 : nop
        mov edi, dword ptr ds : [esi+0xC4]
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x20], ebx
        jle public_6d4718b
        add edi, 0x24
        public_6d47145 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        shl eax, 3
        push eax
        mov eax, dword ptr ds : [edi-0x1C]
        imul eax, dword ptr ds : [edi]
        imul eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6d45ef5
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [esi+0x110]
        shl eax, 3
        push eax
        mov eax, dword ptr ds : [edi-0x18]
        imul eax, dword ptr ds : [esi+0x1C]
        imul eax, dword ptr ds : [edi]
        push eax
        call public_6d45ef5
        add esp, 0x10
        mov dword ptr ds : [edi+8], eax
        inc ebx
        add edi, 0x54
        cmp ebx, dword ptr ds : [esi+0x20]
        jl public_6d47145
        public_6d4718b : nop
        mov eax, dword ptr ds : [esi+0x28]
        xor ecx, ecx
        inc ecx
        cmp eax, ecx
        pop edi
        pop ebx
        je public_6d471b6
        jle public_6d471ae
        push 3
        pop ecx
        cmp eax, ecx
        jle public_6d471b6
        cmp eax, 5
        jg public_6d471ae
        mov dword ptr ds : [esi+0x64], 4
        jmp public_6d471b9
        public_6d471ae : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x64], eax
        jmp public_6d471b9
        public_6d471b6 : nop
        mov dword ptr ds : [esi+0x64], ecx
        public_6d471b9 : nop
        cmp byte ptr ds : [esi+0x4A], 0
        je public_6d471c4
        xor eax, eax
        inc eax
        jmp public_6d471c7
        public_6d471c4 : nop
        mov eax, dword ptr ds : [esi+0x64]
        public_6d471c7 : nop
        mov edx, esi
        mov dword ptr ds : [esi+0x68], eax
        call public_6d46f8a
        test al, al
        je public_6d471e0
        mov eax, dword ptr ds : [esi+0x110]
        mov dword ptr ds : [esi+0x6C], eax
        jmp public_6d471e7
        public_6d471e0 : nop
        mov dword ptr ds : [esi+0x6C], 1
        public_6d471e7 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d46ffb)
    }
}

#undef public_6d47023
#undef public_6d4705b
#undef public_6d4708a
#undef public_6d470b6
#undef public_6d470c5
#undef public_6d470db
#undef public_6d470f2
#undef public_6d47121
#undef public_6d47135
#undef public_6d47145
#undef public_6d4718b
#undef public_6d471ae
#undef public_6d471b6
#undef public_6d471b9
#undef public_6d471c4
#undef public_6d471c7
#undef public_6d471e0
#undef public_6d471e7
