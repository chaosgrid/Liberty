#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5951a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_594f63 _public_594f63
#define public_594f77 _public_594f77
#define public_594f7d _public_594f7d
#define public_594f90 _public_594f90
#define public_594fd1 _public_594fd1
#define public_594fea _public_594fea
#define public_594ffd _public_594ffd
#define public_595008 _public_595008
#define public_59500b _public_59500b
#define public_595010 _public_595010
#define public_595039 _public_595039
#define public_595052 _public_595052
#define public_595065 _public_595065
#define public_59506f _public_59506f
#define public_595092 _public_595092
#define public_5950aa _public_5950aa
#define public_5950bd _public_5950bd
#define public_5950ca _public_5950ca
#define public_5950cc _public_5950cc
#define public_5950d2 _public_5950d2
#define public_5950fb _public_5950fb
#define public_59510e _public_59510e
#define public_595119 _public_595119
#define public_59511c _public_59511c
#define public_59511e _public_59511e
#define public_595121 _public_595121
#define public_59512d _public_59512d

PROC_DECLARE(0x594ef0, internal_594ef0, public_594ef0);
extern "C" NAKED register_t __cdecl internal_594ef0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_5b7e84
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
        call public_5951a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_594f63
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_594f63
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_594f63
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_594f7d
        mov dword ptr ds : [eax+8], ebx
        jmp public_594f7d
        public_594f63 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_594f77
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_594f7d
        public_594f77 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_594f7d
        mov dword ptr ds : [eax], ebx
        public_594f7d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_59512d
        nop 
        lea esp, ss:[esp]
        public_594f90 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_59512d
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_59506f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_594fd1
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_595121
        public_594fd1 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_595010
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_594fea
        mov dword ptr ds : [edx+4], eax
        public_594fea : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_594ffd
        mov dword ptr ds : [edx+4], ecx
        jmp public_59500b
        public_594ffd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_595008
        mov dword ptr ds : [edx], ecx
        jmp public_59500b
        public_595008 : nop
        mov dword ptr ds : [edx+8], ecx
        public_59500b : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_595010 : nop
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
        je public_595039
        mov dword ptr ds : [edi+4], ecx
        public_595039 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_595052
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_59511e
        public_595052 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_595065
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_59511e
        public_595065 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_59511e
        public_59506f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_595092
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_595121
        public_595092 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5950d2
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_5950aa
        mov dword ptr ds : [edx+4], eax
        public_5950aa : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5950bd
        mov dword ptr ds : [edx+4], ecx
        jmp public_5950cc
        public_5950bd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5950ca
        mov dword ptr ds : [edx+8], ecx
        jmp public_5950cc
        public_5950ca : nop
        mov dword ptr ds : [edx], ecx
        public_5950cc : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5950d2 : nop
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
        je public_5950fb
        mov dword ptr ds : [edi+4], ecx
        public_5950fb : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_59510e
        mov dword ptr ds : [edi+4], edx
        jmp public_59511c
        public_59510e : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_595119
        mov dword ptr ds : [edi], edx
        jmp public_59511c
        public_595119 : nop
        mov dword ptr ds : [edi+8], edx
        public_59511c : nop
        mov dword ptr ds : [edx], ecx
        public_59511e : nop
        mov dword ptr ds : [ecx+4], edx
        public_595121 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_594f90
        public_59512d : nop
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
        UNREACHABLE_TRAP(0x594ef0)
    }
}

#undef public_594f63
#undef public_594f77
#undef public_594f7d
#undef public_594f90
#undef public_594fd1
#undef public_594fea
#undef public_594ffd
#undef public_595008
#undef public_59500b
#undef public_595010
#undef public_595039
#undef public_595052
#undef public_595065
#undef public_59506f
#undef public_595092
#undef public_5950aa
#undef public_5950bd
#undef public_5950ca
#undef public_5950cc
#undef public_5950d2
#undef public_5950fb
#undef public_59510e
#undef public_595119
#undef public_59511c
#undef public_59511e
#undef public_595121
#undef public_59512d
