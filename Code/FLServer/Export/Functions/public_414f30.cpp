#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414f30);
CLANG_FORWARD_PROC_SYMBOL(public_415450);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_414fa0 _public_414fa0
#define public_414fb4 _public_414fb4
#define public_414fba _public_414fba
#define public_414fc8 _public_414fc8
#define public_415009 _public_415009
#define public_415022 _public_415022
#define public_415035 _public_415035
#define public_415040 _public_415040
#define public_415043 _public_415043
#define public_415048 _public_415048
#define public_415071 _public_415071
#define public_41508a _public_41508a
#define public_41509d _public_41509d
#define public_4150a7 _public_4150a7
#define public_4150ca _public_4150ca
#define public_4150e2 _public_4150e2
#define public_4150f5 _public_4150f5
#define public_415102 _public_415102
#define public_415104 _public_415104
#define public_41510a _public_41510a
#define public_415133 _public_415133
#define public_415146 _public_415146
#define public_415151 _public_415151
#define public_415154 _public_415154
#define public_415156 _public_415156
#define public_415159 _public_415159
#define public_415165 _public_415165

PROC_DECLARE(0x414f30, internal_414f30, public_414f30);
extern "C" NAKED register_t __cdecl internal_414f30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_418a9e
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_415450
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_414fa0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_414fa0
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_4155c0
        test eax, eax
        jl public_414fa0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_414fba
        mov dword ptr ds : [eax+8], ebx
        jmp public_414fba
        public_414fa0 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_414fb4
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_414fba
        public_414fb4 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_414fba
        mov dword ptr ds : [eax], ebx
        public_414fba : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_415165
        public_414fc8 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_415165
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4150a7
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_415009
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_415159
        public_415009 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_415048
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_415022
        mov dword ptr ds : [edx+4], eax
        public_415022 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_415035
        mov dword ptr ds : [edx+4], ecx
        jmp public_415043
        public_415035 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_415040
        mov dword ptr ds : [edx], ecx
        jmp public_415043
        public_415040 : nop
        mov dword ptr ds : [edx+8], ecx
        public_415043 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_415048 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_415071
        mov dword ptr ds : [edi+4], ecx
        public_415071 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_41508a
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_415156
        public_41508a : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_41509d
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_415156
        public_41509d : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_415156
        public_4150a7 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_4150ca
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_415159
        public_4150ca : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_41510a
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4150e2
        mov dword ptr ds : [edx+4], eax
        public_4150e2 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4150f5
        mov dword ptr ds : [edx+4], ecx
        jmp public_415104
        public_4150f5 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_415102
        mov dword ptr ds : [edx+8], ecx
        jmp public_415104
        public_415102 : nop
        mov dword ptr ds : [edx], ecx
        public_415104 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_41510a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_415133
        mov dword ptr ds : [edi+4], ecx
        public_415133 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_415146
        mov dword ptr ds : [edi+4], edx
        jmp public_415154
        public_415146 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_415151
        mov dword ptr ds : [edi], edx
        jmp public_415154
        public_415151 : nop
        mov dword ptr ds : [edi+8], edx
        public_415154 : nop
        mov dword ptr ds : [edx], ecx
        public_415156 : nop
        mov dword ptr ds : [ecx+4], edx
        public_415159 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_414fc8
        public_415165 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x414f30)
    }
}

#undef public_414fa0
#undef public_414fb4
#undef public_414fba
#undef public_414fc8
#undef public_415009
#undef public_415022
#undef public_415035
#undef public_415040
#undef public_415043
#undef public_415048
#undef public_415071
#undef public_41508a
#undef public_41509d
#undef public_4150a7
#undef public_4150ca
#undef public_4150e2
#undef public_4150f5
#undef public_415102
#undef public_415104
#undef public_41510a
#undef public_415133
#undef public_415146
#undef public_415151
#undef public_415154
#undef public_415156
#undef public_415159
#undef public_415165
