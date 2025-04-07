#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85290);
CLANG_FORWARD_PROC_SYMBOL(public_6d8cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8be76 _public_6d8be76
#define public_6d8be81 _public_6d8be81
#define public_6d8be89 _public_6d8be89
#define public_6d8be94 _public_6d8be94
#define public_6d8bea2 _public_6d8bea2
#define public_6d8beb9 _public_6d8beb9
#define public_6d8becf _public_6d8becf
#define public_6d8bed7 _public_6d8bed7
#define public_6d8bedf _public_6d8bedf
#define public_6d8bee7 _public_6d8bee7
#define public_6d8beef _public_6d8beef
#define public_6d8befb _public_6d8befb
#define public_6d8bf03 _public_6d8bf03
#define public_6d8bf10 _public_6d8bf10
#define public_6d8bf1e _public_6d8bf1e
#define public_6d8bf30 _public_6d8bf30
#define public_6d8bf48 _public_6d8bf48
#define public_6d8bf5d _public_6d8bf5d
#define public_6d8bf71 _public_6d8bf71
#define public_6d8bf85 _public_6d8bf85
#define public_6d8bf8d _public_6d8bf8d
#define public_6d8bf93 _public_6d8bf93
#define public_6d8bfb9 _public_6d8bfb9
#define public_6d8bfbc _public_6d8bfbc
#define public_6d8bfcf _public_6d8bfcf

PROC_DECLARE(0x6d8be10, internal_6d8be10, public_6d8be10);
extern "C" NAKED register_t __cdecl internal_6d8be10()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x1D
        xor esi, esi
        push 1
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], esi
        call public_6d96300
        test eax, eax
        jne public_6d8bfcf
        mov edx, dword ptr ss : [esp+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+0x20], ecx
        mov ax, word ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0x24], ax
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 8
        lea ebp, ds:[edx+0x28]
        cmp ebp, edi
        je public_6d8bfbc
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6d8be76
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6d8be76 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6d8be81
        xor ecx, ecx
        jmp public_6d8be89
        public_6d8be81 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6d8be89 : nop
        cmp esi, ecx
        ja public_6d8becf
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6d8bea2
        public_6d8be94 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6d8be94
        public_6d8bea2 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d8beb9
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d8bfbc
        public_6d8beb9 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d8bfbc
        public_6d8becf : nop
        test eax, eax
        jne public_6d8bed7
        xor esi, esi
        jmp public_6d8bedf
        public_6d8bed7 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6d8bedf : nop
        test edx, edx
        jne public_6d8bee7
        xor ecx, ecx
        jmp public_6d8beef
        public_6d8bee7 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6d8beef : nop
        cmp esi, ecx
        ja public_6d8bf71
        test edx, edx
        jne public_6d8befb
        xor ecx, ecx
        jmp public_6d8bf03
        public_6d8befb : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6d8bf03 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6d8bf1e
        lea ebx, ds:[ebx]
        public_6d8bf10 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6d8bf10
        public_6d8bf1e : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, ecx
        je public_6d8bf48
        mov edi, edi
        public_6d8bf30 : nop
        push esi
        push ebx
        call public_6d8cb70
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6d8bf30
        public_6d8bf48 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6d8bf5d
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6d8bfb9
        public_6d8bf5d : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6d8bfb9
        public_6d8bf71 : nop
        push edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d8bf85
        xor eax, eax
        jmp public_6d8bf8d
        public_6d8bf85 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6d8bf8d : nop
        test eax, eax
        jge public_6d8bf93
        xor eax, eax
        public_6d8bf93 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6d85290
        mov dword ptr ss : [ebp+0xC], eax
        public_6d8bfb9 : nop
        mov dword ptr ss : [ebp+8], eax
        public_6d8bfbc : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop ebp
        public_6d8bfcf : nop
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d8be10)
    }
}

#undef public_6d8be76
#undef public_6d8be81
#undef public_6d8be89
#undef public_6d8be94
#undef public_6d8bea2
#undef public_6d8beb9
#undef public_6d8becf
#undef public_6d8bed7
#undef public_6d8bedf
#undef public_6d8bee7
#undef public_6d8beef
#undef public_6d8befb
#undef public_6d8bf03
#undef public_6d8bf10
#undef public_6d8bf1e
#undef public_6d8bf30
#undef public_6d8bf48
#undef public_6d8bf5d
#undef public_6d8bf71
#undef public_6d8bf85
#undef public_6d8bf8d
#undef public_6d8bf93
#undef public_6d8bfb9
#undef public_6d8bfbc
#undef public_6d8bfcf
