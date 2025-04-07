#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f19b80);

#define public_6ec3106 _public_6ec3106
#define public_6ec310a _public_6ec310a
#define public_6ec3140 _public_6ec3140
#define public_6ec314b _public_6ec314b
#define public_6ec314e _public_6ec314e
#define public_6ec3152 _public_6ec3152
#define public_6ec3160 _public_6ec3160
#define public_6ec316a _public_6ec316a
#define public_6ec316e _public_6ec316e
#define public_6ec3172 _public_6ec3172
#define public_6ec3178 _public_6ec3178
#define public_6ec3190 _public_6ec3190
#define public_6ec319c _public_6ec319c
#define public_6ec31a4 _public_6ec31a4
#define public_6ec31ae _public_6ec31ae
#define public_6ec31b5 _public_6ec31b5
#define public_6ec31b9 _public_6ec31b9
#define public_6ec31c2 _public_6ec31c2
#define public_6ec31ca _public_6ec31ca
#define public_6ec31d4 _public_6ec31d4
#define public_6ec31d6 _public_6ec31d6

PROC_DECLARE(0x6ec30c0, internal_6ec30c0, public_6ec30c0);
extern "C" NAKED register_t __cdecl internal_6ec30c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        xor al, al
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6ec31d6
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[ebx+0x10]
        push eax
        call public_6f15940
        mov ecx, dword ptr ds : [esi]
        lea ebp, ds:[ebx+0xC]
        push ebp
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, eax
        call public_6f19b80
        test al, al
        je public_6ec3106
        cmp edi, dword ptr ds : [esi+4]
        jne public_6ec3106
        mov eax, ebx
        inc dword ptr ds : [eax+0x44]
        jmp public_6ec310a
        public_6ec3106 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6ec310a : nop
        cmp edi, dword ptr ds : [esi+4]
        jne public_6ec31c2
        cmp dword ptr ds : [eax+0x48], 0xFFFFFFFF
        jne public_6ec31c2
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, edx
        cmp eax, ecx
        mov ebx, esi
        je public_6ec3152
        mov edi, dword ptr ss : [ebp]
        lea ecx, ds:[ecx]
        public_6ec3140 : nop
        cmp edi, dword ptr ds : [eax+0xC]
        jae public_6ec314b
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6ec314e
        public_6ec314b : nop
        mov eax, dword ptr ds : [eax+8]
        public_6ec314e : nop
        cmp eax, ecx
        jne public_6ec3140
        public_6ec3152 : nop
        cmp edx, ecx
        mov eax, esi
        je public_6ec3172
        mov esi, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_6ec3160 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6ec316a
        mov edx, dword ptr ds : [edx+8]
        jmp public_6ec316e
        public_6ec316a : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6ec316e : nop
        cmp edx, ecx
        jne public_6ec3160
        public_6ec3172 : nop
        xor edx, edx
        cmp eax, ebx
        je public_6ec31b9
        public_6ec3178 : nop
        mov ecx, dword ptr ds : [eax+8]
        inc edx
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_6ec319c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_6ec31b5
        lea esp, ss:[esp]
        public_6ec3190 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_6ec3190
        jmp public_6ec31b5
        public_6ec319c : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec31ae
        public_6ec31a4 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6ec31a4
        public_6ec31ae : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6ec31b5
        mov eax, ecx
        public_6ec31b5 : nop
        cmp eax, ebx
        jne public_6ec3178
        public_6ec31b9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0x44], edx
        je public_6ec31ca
        public_6ec31c2 : nop
        mov ecx, dword ptr ds : [eax+0x48]
        cmp ecx, dword ptr ds : [eax+0x44]
        jne public_6ec31d4
        public_6ec31ca : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6ec31d4 : nop
        xor al, al
        public_6ec31d6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec30c0)
    }
}

#undef public_6ec3106
#undef public_6ec310a
#undef public_6ec3140
#undef public_6ec314b
#undef public_6ec314e
#undef public_6ec3152
#undef public_6ec3160
#undef public_6ec316a
#undef public_6ec316e
#undef public_6ec3172
#undef public_6ec3178
#undef public_6ec3190
#undef public_6ec319c
#undef public_6ec31a4
#undef public_6ec31ae
#undef public_6ec31b5
#undef public_6ec31b9
#undef public_6ec31c2
#undef public_6ec31ca
#undef public_6ec31d4
#undef public_6ec31d6
