#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb6ec6 _public_6eb6ec6
#define public_6eb6ece _public_6eb6ece
#define public_6eb6ed9 _public_6eb6ed9
#define public_6eb6ee1 _public_6eb6ee1
#define public_6eb6ef2 _public_6eb6ef2
#define public_6eb6f1a _public_6eb6f1a
#define public_6eb6f36 _public_6eb6f36
#define public_6eb6f51 _public_6eb6f51
#define public_6eb6f59 _public_6eb6f59
#define public_6eb6f61 _public_6eb6f61
#define public_6eb6f69 _public_6eb6f69
#define public_6eb6f71 _public_6eb6f71
#define public_6eb6f81 _public_6eb6f81
#define public_6eb6f89 _public_6eb6f89
#define public_6eb6f92 _public_6eb6f92
#define public_6eb6fba _public_6eb6fba
#define public_6eb6fc6 _public_6eb6fc6
#define public_6eb6fda _public_6eb6fda
#define public_6eb6ffa _public_6eb6ffa
#define public_6eb7019 _public_6eb7019
#define public_6eb702d _public_6eb702d
#define public_6eb7035 _public_6eb7035
#define public_6eb703b _public_6eb703b
#define public_6eb7060 _public_6eb7060

PROC_DECLARE(0x6eb6ea0, internal_6eb6ea0, public_6eb6ea0);
extern "C" NAKED register_t __cdecl internal_6eb6ea0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        lea esi, ds:[ecx+0x108]
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        je public_6eb7060
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6eb6ec6
        xor edi, edi
        jmp public_6eb6ece
        public_6eb6ec6 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, ecx
        sar edi, 4
        public_6eb6ece : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6eb6ed9
        xor eax, eax
        jmp public_6eb6ee1
        public_6eb6ed9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 4
        public_6eb6ee1 : nop
        cmp edi, eax
        ja public_6eb6f51
        mov edi, dword ptr ds : [ebx+8]
        mov eax, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6eb6f1a
        public_6eb6ef2 : nop
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ebp
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x10
        add edx, 0x10
        cmp eax, ecx
        jne public_6eb6ef2
        public_6eb6f1a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6eb6f36
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        shl eax, 4
        pop edi
        add eax, ecx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eb6f36 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+4]
        sar eax, 4
        shl eax, 4
        pop edi
        add eax, ecx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eb6f51 : nop
        test ecx, ecx
        jne public_6eb6f59
        xor edi, edi
        jmp public_6eb6f61
        public_6eb6f59 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, ecx
        sar edi, 4
        public_6eb6f61 : nop
        test edx, edx
        jne public_6eb6f69
        xor eax, eax
        jmp public_6eb6f71
        public_6eb6f69 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, edx
        sar eax, 4
        public_6eb6f71 : nop
        cmp edi, eax
        ja public_6eb7019
        test edx, edx
        jne public_6eb6f81
        xor eax, eax
        jmp public_6eb6f89
        public_6eb6f81 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 4
        public_6eb6f89 : nop
        shl eax, 4
        add eax, ecx
        cmp ecx, eax
        je public_6eb6fba
        public_6eb6f92 : nop
        mov esi, ecx
        mov ebp, dword ptr ds : [esi]
        mov edi, edx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add ecx, 0x10
        add edx, 0x10
        cmp ecx, eax
        mov dword ptr ds : [edi+0xC], esi
        jne public_6eb6f92
        mov esi, dword ptr ss : [esp+0x10]
        public_6eb6fba : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov edi, dword ptr ds : [esi+8]
        mov esi, eax
        je public_6eb6fda
        public_6eb6fc6 : nop
        push esi
        push edi
        call public_6f6a670
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebp
        jne public_6eb6fc6
        public_6eb6fda : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6eb6ffa
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        xor eax, eax
        pop esi
        shl eax, 4
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        pop ecx
        ret 4
        public_6eb6ffa : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        sar eax, 4
        pop esi
        shl eax, 4
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        pop ecx
        ret 4
        public_6eb7019 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        test ecx, ecx
        jne public_6eb702d
        xor eax, eax
        jmp public_6eb7035
        public_6eb702d : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        public_6eb7035 : nop
        test eax, eax
        jge public_6eb703b
        xor eax, eax
        public_6eb703b : nop
        shl eax, 4
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6eb7310
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6eb7060 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eb6ea0)
    }
}

#undef public_6eb6ec6
#undef public_6eb6ece
#undef public_6eb6ed9
#undef public_6eb6ee1
#undef public_6eb6ef2
#undef public_6eb6f1a
#undef public_6eb6f36
#undef public_6eb6f51
#undef public_6eb6f59
#undef public_6eb6f61
#undef public_6eb6f69
#undef public_6eb6f71
#undef public_6eb6f81
#undef public_6eb6f89
#undef public_6eb6f92
#undef public_6eb6fba
#undef public_6eb6fc6
#undef public_6eb6fda
#undef public_6eb6ffa
#undef public_6eb7019
#undef public_6eb702d
#undef public_6eb7035
#undef public_6eb703b
#undef public_6eb7060
