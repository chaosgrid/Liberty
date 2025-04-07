#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef87b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef87cc _public_6ef87cc
#define public_6ef87d1 _public_6ef87d1
#define public_6ef87dc _public_6ef87dc
#define public_6ef87e1 _public_6ef87e1
#define public_6ef87f0 _public_6ef87f0
#define public_6ef87fa _public_6ef87fa
#define public_6ef8813 _public_6ef8813
#define public_6ef8828 _public_6ef8828
#define public_6ef8830 _public_6ef8830
#define public_6ef8835 _public_6ef8835
#define public_6ef883d _public_6ef883d
#define public_6ef8842 _public_6ef8842
#define public_6ef884e _public_6ef884e
#define public_6ef8853 _public_6ef8853
#define public_6ef8860 _public_6ef8860
#define public_6ef886a _public_6ef886a
#define public_6ef8874 _public_6ef8874
#define public_6ef887c _public_6ef887c
#define public_6ef8882 _public_6ef8882
#define public_6ef889b _public_6ef889b
#define public_6ef88b0 _public_6ef88b0
#define public_6ef88c4 _public_6ef88c4
#define public_6ef88c9 _public_6ef88c9
#define public_6ef88cf _public_6ef88cf
#define public_6ef88e7 _public_6ef88e7
#define public_6ef88ef _public_6ef88ef
#define public_6ef88f5 _public_6ef88f5
#define public_6ef88fb _public_6ef88fb

PROC_DECLARE(0x6ef87b0, internal_6ef87b0, public_6ef87b0);
extern "C" NAKED register_t __cdecl internal_6ef87b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebp, ecx
        cmp ebp, esi
        push edi
        je public_6ef88fb
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ef87cc
        xor edi, edi
        jmp public_6ef87d1
        public_6ef87cc : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6ef87d1 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6ef87dc
        xor ecx, ecx
        jmp public_6ef87e1
        public_6ef87dc : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        public_6ef87e1 : nop
        cmp edi, ecx
        ja public_6ef8828
        mov edi, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6ef87fa
        lea esp, ss:[esp]
        public_6ef87f0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx], cl
        inc edx
        inc eax
        cmp eax, edi
        jne public_6ef87f0
        public_6ef87fa : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ef8813
        mov edx, dword ptr ss : [ebp+4]
        xor esi, esi
        pop edi
        add edx, esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov eax, ebp
        pop ebp
        ret 4
        public_6ef8813 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [ebp+4]
        sub esi, eax
        pop edi
        add edx, esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov eax, ebp
        pop ebp
        ret 4
        public_6ef8828 : nop
        test eax, eax
        jne public_6ef8830
        xor edi, edi
        jmp public_6ef8835
        public_6ef8830 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        public_6ef8835 : nop
        test edx, edx
        jne public_6ef883d
        xor ecx, ecx
        jmp public_6ef8842
        public_6ef883d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        public_6ef8842 : nop
        cmp edi, ecx
        ja public_6ef88b0
        test edx, edx
        jne public_6ef884e
        xor ecx, ecx
        jmp public_6ef8853
        public_6ef884e : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        public_6ef8853 : nop
        add ecx, eax
        cmp eax, ecx
        mov edi, edx
        je public_6ef886a
        nop 
        lea esp, ss:[esp]
        public_6ef8860 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], dl
        inc edi
        inc eax
        cmp eax, ecx
        jne public_6ef8860
        public_6ef886a : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov eax, dword ptr ss : [ebp+8]
        je public_6ef8882
        public_6ef8874 : nop
        test eax, eax
        je public_6ef887c
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_6ef887c : nop
        inc eax
        inc ecx
        cmp ecx, edi
        jne public_6ef8874
        public_6ef8882 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ef889b
        mov eax, dword ptr ss : [ebp+4]
        xor esi, esi
        add eax, esi
        pop edi
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        public_6ef889b : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ss : [ebp+4]
        add eax, esi
        pop edi
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        public_6ef88b0 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ef88c4
        xor eax, eax
        jmp public_6ef88c9
        public_6ef88c4 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_6ef88c9 : nop
        test eax, eax
        jge public_6ef88cf
        xor eax, eax
        public_6ef88cf : nop
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov edi, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        je public_6ef88f5
        public_6ef88e7 : nop
        test ecx, ecx
        je public_6ef88ef
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], dl
        public_6ef88ef : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_6ef88e7
        public_6ef88f5 : nop
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        public_6ef88fb : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ef87b0)
    }
}

#undef public_6ef87cc
#undef public_6ef87d1
#undef public_6ef87dc
#undef public_6ef87e1
#undef public_6ef87f0
#undef public_6ef87fa
#undef public_6ef8813
#undef public_6ef8828
#undef public_6ef8830
#undef public_6ef8835
#undef public_6ef883d
#undef public_6ef8842
#undef public_6ef884e
#undef public_6ef8853
#undef public_6ef8860
#undef public_6ef886a
#undef public_6ef8874
#undef public_6ef887c
#undef public_6ef8882
#undef public_6ef889b
#undef public_6ef88b0
#undef public_6ef88c4
#undef public_6ef88c9
#undef public_6ef88cf
#undef public_6ef88e7
#undef public_6ef88ef
#undef public_6ef88f5
#undef public_6ef88fb
