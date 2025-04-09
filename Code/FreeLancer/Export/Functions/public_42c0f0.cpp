#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c0f0);
CLANG_FORWARD_PROC_SYMBOL(public_42c790);
CLANG_FORWARD_PROC_SYMBOL(public_42ca00);
CLANG_FORWARD_PROC_SYMBOL(public_42ca20);
CLANG_FORWARD_PROC_SYMBOL(public_42ca80);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_42c110 _public_42c110
#define public_42c124 _public_42c124
#define public_42c127 _public_42c127
#define public_42c12b _public_42c12b
#define public_42c18b _public_42c18b
#define public_42c1a3 _public_42c1a3
#define public_42c1ad _public_42c1ad
#define public_42c1b1 _public_42c1b1
#define public_42c1c0 _public_42c1c0
#define public_42c1fb _public_42c1fb
#define public_42c20a _public_42c20a
#define public_42c22b _public_42c22b
#define public_42c24c _public_42c24c
#define public_42c25a _public_42c25a
#define public_42c279 _public_42c279
#define public_42c285 _public_42c285
#define public_42c2a1 _public_42c2a1
#define public_42c2bc _public_42c2bc
#define public_42c2c4 _public_42c2c4
#define public_42c2e7 _public_42c2e7

PROC_DECLARE(0x42c0f0, internal_42c0f0, public_42c0f0);
extern "C" NAKED register_t __cdecl internal_42c0f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_42c12b
        lea esp, ss:[esp]
        public_42c110 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ss : [ebp+0x10]
        mov esi, ebp
        setb al
        test al, al
        je public_42c124
        mov ebp, dword ptr ss : [ebp]
        jmp public_42c127
        public_42c124 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_42c127 : nop
        cmp ebp, edx
        jne public_42c110
        public_42c12b : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_42c2a1
        push 0
        push esi
        mov ecx, edi
        call public_42ca00
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_42ca80
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_42c18b
        cmp ebp, dword ptr ds : [edi+8]
        jne public_42c18b
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [esi+0x10]
        jb public_42c18b
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42c1b1
        mov dword ptr ds : [eax+8], ebx
        jmp public_42c1b1
        public_42c18b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_42c1a3
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_42c1ad
        public_42c1a3 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42c1ad
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_42c1ad : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_42c1b1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_42c285
        nop 
        public_42c1c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x38]
        test cl, cl
        jne public_42c285
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42c22b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_42c1fb
        mov byte ptr ds : [eax+0x38], 1
        mov byte ptr ds : [ecx+0x38], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_42c279
        public_42c1fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_42c20a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_42c20a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x38], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x38], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_42c279
        public_42c22b : nop
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_42c24c
        mov byte ptr ds : [eax+0x38], 1
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x38], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_42c279
        public_42c24c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42c25a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_42c25a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x38], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_42c279 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_42c1c0
        public_42c285 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x38], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_42c2a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_42c2bc
        cmp esi, dword ptr ds : [ecx]
        je public_42c2c4
        lea ecx, ss:[esp+0x10]
        call public_42ca20
        mov edx, dword ptr ss : [esp+0x10]
        public_42c2bc : nop
        mov eax, dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx+4]
        jae public_42c2e7
        public_42c2c4 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_42c790
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_42c2e7 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x42c0f0)
    }
}

#undef public_42c110
#undef public_42c124
#undef public_42c127
#undef public_42c12b
#undef public_42c18b
#undef public_42c1a3
#undef public_42c1ad
#undef public_42c1b1
#undef public_42c1c0
#undef public_42c1fb
#undef public_42c20a
#undef public_42c22b
#undef public_42c24c
#undef public_42c25a
#undef public_42c279
#undef public_42c285
#undef public_42c2a1
#undef public_42c2bc
#undef public_42c2c4
#undef public_42c2e7
