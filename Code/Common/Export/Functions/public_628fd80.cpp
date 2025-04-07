#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd80);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628fde9 _public_628fde9
#define public_628fdfd _public_628fdfd
#define public_628fe03 _public_628fe03
#define public_628fe11 _public_628fe11
#define public_628fe52 _public_628fe52
#define public_628fe6b _public_628fe6b
#define public_628fe7e _public_628fe7e
#define public_628fe89 _public_628fe89
#define public_628fe8c _public_628fe8c
#define public_628fe91 _public_628fe91
#define public_628feba _public_628feba
#define public_628fed3 _public_628fed3
#define public_628fee6 _public_628fee6
#define public_628fef0 _public_628fef0
#define public_628ff13 _public_628ff13
#define public_628ff2b _public_628ff2b
#define public_628ff3e _public_628ff3e
#define public_628ff4b _public_628ff4b
#define public_628ff4d _public_628ff4d
#define public_628ff53 _public_628ff53
#define public_628ff7c _public_628ff7c
#define public_628ff8f _public_628ff8f
#define public_628ff9a _public_628ff9a
#define public_628ff9d _public_628ff9d
#define public_628ff9f _public_628ff9f
#define public_628ffa2 _public_628ffa2
#define public_628ffae _public_628ffae

PROC_DECLARE(0x628fd80, internal_628fd80, public_628fd80);
extern "C" NAKED register_t __cdecl internal_628fd80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_630cd00
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_628fde9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_628fde9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_628fde9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_628fe03
        mov dword ptr ds : [eax+8], ebx
        jmp public_628fe03
        public_628fde9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_628fdfd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_628fe03
        public_628fdfd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_628fe03
        mov dword ptr ds : [eax], ebx
        public_628fe03 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_628ffae
        public_628fe11 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_628ffae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_628fef0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_628fe52
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_628ffa2
        public_628fe52 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_628fe91
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_628fe6b
        mov dword ptr ds : [edx+4], eax
        public_628fe6b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_628fe7e
        mov dword ptr ds : [edx+4], ecx
        jmp public_628fe8c
        public_628fe7e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_628fe89
        mov dword ptr ds : [edx], ecx
        jmp public_628fe8c
        public_628fe89 : nop
        mov dword ptr ds : [edx+8], ecx
        public_628fe8c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_628fe91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_628feba
        mov dword ptr ds : [edi+4], ecx
        public_628feba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_628fed3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628ff9f
        public_628fed3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_628fee6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628ff9f
        public_628fee6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_628ff9f
        public_628fef0 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_628ff13
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_628ffa2
        public_628ff13 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_628ff53
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_628ff2b
        mov dword ptr ds : [edx+4], eax
        public_628ff2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_628ff3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_628ff4d
        public_628ff3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_628ff4b
        mov dword ptr ds : [edx+8], ecx
        jmp public_628ff4d
        public_628ff4b : nop
        mov dword ptr ds : [edx], ecx
        public_628ff4d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_628ff53 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_628ff7c
        mov dword ptr ds : [edi+4], ecx
        public_628ff7c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_628ff8f
        mov dword ptr ds : [edi+4], edx
        jmp public_628ff9d
        public_628ff8f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_628ff9a
        mov dword ptr ds : [edi], edx
        jmp public_628ff9d
        public_628ff9a : nop
        mov dword ptr ds : [edi+8], edx
        public_628ff9d : nop
        mov dword ptr ds : [edx], ecx
        public_628ff9f : nop
        mov dword ptr ds : [ecx+4], edx
        public_628ffa2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_628fe11
        public_628ffae : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x628fd80)
    }
}

#undef public_628fde9
#undef public_628fdfd
#undef public_628fe03
#undef public_628fe11
#undef public_628fe52
#undef public_628fe6b
#undef public_628fe7e
#undef public_628fe89
#undef public_628fe8c
#undef public_628fe91
#undef public_628feba
#undef public_628fed3
#undef public_628fee6
#undef public_628fef0
#undef public_628ff13
#undef public_628ff2b
#undef public_628ff3e
#undef public_628ff4b
#undef public_628ff4d
#undef public_628ff53
#undef public_628ff7c
#undef public_628ff8f
#undef public_628ff9a
#undef public_628ff9d
#undef public_628ff9f
#undef public_628ffa2
#undef public_628ffae
