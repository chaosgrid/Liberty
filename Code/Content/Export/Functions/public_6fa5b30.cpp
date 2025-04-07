#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f93f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f947e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5b30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa5b52 _public_6fa5b52
#define public_6fa5b6a _public_6fa5b6a
#define public_6fa5b75 _public_6fa5b75
#define public_6fa5b8b _public_6fa5b8b
#define public_6fa5b98 _public_6fa5b98
#define public_6fa5bb0 _public_6fa5bb0
#define public_6fa5bc1 _public_6fa5bc1
#define public_6fa5bd9 _public_6fa5bd9
#define public_6fa5bf3 _public_6fa5bf3
#define public_6fa5c09 _public_6fa5c09
#define public_6fa5c11 _public_6fa5c11
#define public_6fa5c29 _public_6fa5c29
#define public_6fa5c31 _public_6fa5c31
#define public_6fa5c47 _public_6fa5c47
#define public_6fa5c57 _public_6fa5c57
#define public_6fa5c6d _public_6fa5c6d
#define public_6fa5c80 _public_6fa5c80
#define public_6fa5c98 _public_6fa5c98
#define public_6fa5cb0 _public_6fa5cb0
#define public_6fa5cce _public_6fa5cce
#define public_6fa5cd2 _public_6fa5cd2
#define public_6fa5ce2 _public_6fa5ce2
#define public_6fa5cf0 _public_6fa5cf0
#define public_6fa5d01 _public_6fa5d01
#define public_6fa5d18 _public_6fa5d18
#define public_6fa5d2e _public_6fa5d2e
#define public_6fa5d36 _public_6fa5d36
#define public_6fa5d54 _public_6fa5d54
#define public_6fa5d6e _public_6fa5d6e
#define public_6fa5d80 _public_6fa5d80

PROC_DECLARE(0x6fa5b30, internal_6fa5b30, public_6fa5b30);
extern "C" NAKED register_t __cdecl internal_6fa5b30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6fa5d80
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6fa5b52
        xor edi, edi
        jmp public_6fa5b6a
        public_6fa5b52 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6fa5b6a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6fa5b75
        xor edx, edx
        jmp public_6fa5b8b
        public_6fa5b75 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5b8b : nop
        cmp edi, edx
        ja public_6fa5c09
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6fa5bb0
        public_6fa5b98 : nop
        push esi
        mov ecx, edi
        call public_6f947e0
        add esi, 0x108
        add edi, 0x108
        cmp esi, ebx
        jne public_6fa5b98
        public_6fa5bb0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_6fa5cd2
        public_6fa5bc1 : nop
        push 0
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, ebx
        jne public_6fa5bc1
        jmp public_6fa5cce
        public_6fa5bd9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x3E0F83E1
        imul ecx
        mov eax, dword ptr ss : [esp+0x10]
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa5bf3 : nop
        mov ecx, dword ptr ds : [eax+4]
        imul edx, 0x108
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa5c09 : nop
        test esi, esi
        jne public_6fa5c11
        xor edi, edi
        jmp public_6fa5c29
        public_6fa5c11 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6fa5c29 : nop
        test ecx, ecx
        jne public_6fa5c31
        xor edx, edx
        jmp public_6fa5c47
        public_6fa5c31 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5c47 : nop
        cmp edi, edx
        ja public_6fa5ce2
        test ecx, ecx
        jne public_6fa5c57
        xor edx, edx
        jmp public_6fa5c6d
        public_6fa5c57 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5c6d : nop
        imul edx, 0x108
        add edx, esi
        mov edi, edx
        cmp esi, edi
        mov ebx, ecx
        je public_6fa5c98
        lea ecx, ds:[ecx]
        public_6fa5c80 : nop
        push esi
        mov ecx, ebx
        call public_6f947e0
        add esi, 0x108
        add ebx, 0x108
        cmp esi, edi
        jne public_6fa5c80
        public_6fa5c98 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_6fa5cd2
        lea esp, ss:[esp]
        public_6fa5cb0 : nop
        push esi
        push ebx
        call public_6f93f70
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x108
        add esp, 8
        add ebx, 0x108
        cmp esi, eax
        jne public_6fa5cb0
        public_6fa5cce : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa5cd2 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6fa5bd9
        jmp public_6fa5bf3
        public_6fa5ce2 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6fa5d01
        nop 
        lea esp, ss:[esp]
        public_6fa5cf0 : nop
        mov ecx, esi
        call public_6ec7820
        add esi, 0x108
        cmp esi, edi
        jne public_6fa5cf0
        public_6fa5d01 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6fa5d18
        xor edx, edx
        jmp public_6fa5d2e
        public_6fa5d18 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5d2e : nop
        test edx, edx
        mov eax, edx
        jge public_6fa5d36
        xor eax, eax
        public_6fa5d36 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6fa5d6e
        public_6fa5d54 : nop
        push esi
        push edi
        call public_6f93f70
        add esi, 0x108
        add esp, 8
        add edi, 0x108
        cmp esi, ebx
        jne public_6fa5d54
        public_6fa5d6e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa5d80 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa5b30)
    }
}

#undef public_6fa5b52
#undef public_6fa5b6a
#undef public_6fa5b75
#undef public_6fa5b8b
#undef public_6fa5b98
#undef public_6fa5bb0
#undef public_6fa5bc1
#undef public_6fa5bd9
#undef public_6fa5bf3
#undef public_6fa5c09
#undef public_6fa5c11
#undef public_6fa5c29
#undef public_6fa5c31
#undef public_6fa5c47
#undef public_6fa5c57
#undef public_6fa5c6d
#undef public_6fa5c80
#undef public_6fa5c98
#undef public_6fa5cb0
#undef public_6fa5cce
#undef public_6fa5cd2
#undef public_6fa5ce2
#undef public_6fa5cf0
#undef public_6fa5d01
#undef public_6fa5d18
#undef public_6fa5d2e
#undef public_6fa5d36
#undef public_6fa5d54
#undef public_6fa5d6e
#undef public_6fa5d80
