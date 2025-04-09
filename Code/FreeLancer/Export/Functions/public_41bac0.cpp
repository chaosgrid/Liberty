#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bac0);
CLANG_FORWARD_PROC_SYMBOL(public_41bdc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41bb29 _public_41bb29
#define public_41bb3d _public_41bb3d
#define public_41bb43 _public_41bb43
#define public_41bb51 _public_41bb51
#define public_41bb92 _public_41bb92
#define public_41bbab _public_41bbab
#define public_41bbbe _public_41bbbe
#define public_41bbc9 _public_41bbc9
#define public_41bbcc _public_41bbcc
#define public_41bbd1 _public_41bbd1
#define public_41bbfa _public_41bbfa
#define public_41bc13 _public_41bc13
#define public_41bc26 _public_41bc26
#define public_41bc30 _public_41bc30
#define public_41bc53 _public_41bc53
#define public_41bc6b _public_41bc6b
#define public_41bc7e _public_41bc7e
#define public_41bc8b _public_41bc8b
#define public_41bc8d _public_41bc8d
#define public_41bc93 _public_41bc93
#define public_41bcbc _public_41bcbc
#define public_41bccf _public_41bccf
#define public_41bcda _public_41bcda
#define public_41bcdd _public_41bcdd
#define public_41bcdf _public_41bcdf
#define public_41bce2 _public_41bce2
#define public_41bcee _public_41bcee

PROC_DECLARE(0x41bac0, internal_41bac0, public_41bac0);
extern "C" NAKED register_t __cdecl internal_41bac0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_41bdc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_41bb29
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_41bb29
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_41bb29
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_41bb43
        mov dword ptr ds : [eax+8], ebx
        jmp public_41bb43
        public_41bb29 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_41bb3d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_41bb43
        public_41bb3d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_41bb43
        mov dword ptr ds : [eax], ebx
        public_41bb43 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_41bcee
        public_41bb51 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_41bcee
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_41bc30
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_41bb92
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_41bce2
        public_41bb92 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_41bbd1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_41bbab
        mov dword ptr ds : [edx+4], eax
        public_41bbab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_41bbbe
        mov dword ptr ds : [edx+4], ecx
        jmp public_41bbcc
        public_41bbbe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_41bbc9
        mov dword ptr ds : [edx], ecx
        jmp public_41bbcc
        public_41bbc9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_41bbcc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_41bbd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_41bbfa
        mov dword ptr ds : [edi+4], ecx
        public_41bbfa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_41bc13
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41bcdf
        public_41bc13 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_41bc26
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41bcdf
        public_41bc26 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41bcdf
        public_41bc30 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_41bc53
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_41bce2
        public_41bc53 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_41bc93
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_41bc6b
        mov dword ptr ds : [edx+4], eax
        public_41bc6b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_41bc7e
        mov dword ptr ds : [edx+4], ecx
        jmp public_41bc8d
        public_41bc7e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_41bc8b
        mov dword ptr ds : [edx+8], ecx
        jmp public_41bc8d
        public_41bc8b : nop
        mov dword ptr ds : [edx], ecx
        public_41bc8d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_41bc93 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_41bcbc
        mov dword ptr ds : [edi+4], ecx
        public_41bcbc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_41bccf
        mov dword ptr ds : [edi+4], edx
        jmp public_41bcdd
        public_41bccf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_41bcda
        mov dword ptr ds : [edi], edx
        jmp public_41bcdd
        public_41bcda : nop
        mov dword ptr ds : [edi+8], edx
        public_41bcdd : nop
        mov dword ptr ds : [edx], ecx
        public_41bcdf : nop
        mov dword ptr ds : [ecx+4], edx
        public_41bce2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_41bb51
        public_41bcee : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x41bac0)
    }
}

#undef public_41bb29
#undef public_41bb3d
#undef public_41bb43
#undef public_41bb51
#undef public_41bb92
#undef public_41bbab
#undef public_41bbbe
#undef public_41bbc9
#undef public_41bbcc
#undef public_41bbd1
#undef public_41bbfa
#undef public_41bc13
#undef public_41bc26
#undef public_41bc30
#undef public_41bc53
#undef public_41bc6b
#undef public_41bc7e
#undef public_41bc8b
#undef public_41bc8d
#undef public_41bc93
#undef public_41bcbc
#undef public_41bccf
#undef public_41bcda
#undef public_41bcdd
#undef public_41bcdf
#undef public_41bce2
#undef public_41bcee
