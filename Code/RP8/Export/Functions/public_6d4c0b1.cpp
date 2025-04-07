#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c0b1);
CLANG_FORWARD_PROC_SYMBOL(public_6d5862a);
CLANG_FORWARD_PROC_SYMBOL(public_6d5893f);
CLANG_FORWARD_PROC_SYMBOL(public_6d58afd);
CLANG_FORWARD_PROC_SYMBOL(public_6d58b3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d58b86);
CLANG_FORWARD_PROC_SYMBOL(public_6d58bd2);

#define public_6d4c0e8 _public_6d4c0e8
#define public_6d4c0ea _public_6d4c0ea
#define public_6d4c110 _public_6d4c110
#define public_6d4c126 _public_6d4c126
#define public_6d4c12e _public_6d4c12e
#define public_6d4c13a _public_6d4c13a
#define public_6d4c14a _public_6d4c14a
#define public_6d4c153 _public_6d4c153
#define public_6d4c15c _public_6d4c15c
#define public_6d4c165 _public_6d4c165
#define public_6d4c16c _public_6d4c16c
#define public_6d4c16f _public_6d4c16f
#define public_6d4c1bd _public_6d4c1bd
#define public_6d4c1c9 _public_6d4c1c9
#define public_6d4c1ce _public_6d4c1ce
#define public_6d4c1fd _public_6d4c1fd
#define public_6d4c20d _public_6d4c20d
#define public_6d4c232 _public_6d4c232
#define public_6d4c23c _public_6d4c23c
#define public_6d4c248 _public_6d4c248
#define public_6d4c264 _public_6d4c264

PROC_DECLARE(0x6d4c0b1, internal_6d4c0b1, public_6d4c0b1);
extern "C" NAKED register_t __cdecl internal_6d4c0b1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        xor ecx, ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi+0x20], ecx
        mov eax, dword ptr ds : [esi+0x198]
        push edi
        mov edi, dword ptr ds : [esi+0xC4]
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp-0xC], ecx
        jle public_6d4c264
        push ebx
        lea ebx, ds:[eax+0x2C]
        add edi, 0x24
        mov dword ptr ss : [ebp-0x10], ebx
        jmp public_6d4c0ea
        public_6d4c0e8 : nop
        xor ecx, ecx
        public_6d4c0ea : nop
        mov eax, dword ptr ds : [edi]
        dec eax
        je public_6d4c165
        dec eax
        je public_6d4c15c
        push 2
        pop edx
        sub eax, edx
        je public_6d4c153
        sub eax, 4
        je public_6d4c110
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 6
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x18], ecx
        jmp public_6d4c126
        public_6d4c110 : nop
        mov eax, dword ptr ds : [esi+0x44]
        sub eax, ecx
        je public_6d4c14a
        dec eax
        je public_6d4c13a
        dec eax
        je public_6d4c12e
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2F
        public_6d4c126 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d4c16f
        public_6d4c12e : nop
        mov dword ptr ss : [ebp+8], offset _public_6d58bd2
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d4c16f
        public_6d4c13a : nop
        mov dword ptr ss : [ebp+8], offset _public_6d58b86
        mov dword ptr ss : [ebp-4], 1
        jmp public_6d4c16f
        public_6d4c14a : nop
        mov dword ptr ss : [ebp+8], offset _public_6d58b3a
        jmp public_6d4c16c
        public_6d4c153 : nop
        mov dword ptr ss : [ebp+8], offset _public_6d5862a
        jmp public_6d4c16c
        public_6d4c15c : nop
        mov dword ptr ss : [ebp+8], offset _public_6d5893f
        jmp public_6d4c16c
        public_6d4c165 : nop
        mov dword ptr ss : [ebp+8], offset _public_6d58afd
        public_6d4c16c : nop
        mov dword ptr ss : [ebp-4], ecx
        public_6d4c16f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx-0x28], eax
        cmp byte ptr ds : [edi+0xC], 0
        je public_6d4c248
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ebx], eax
        je public_6d4c248
        mov edx, dword ptr ds : [edi+0x28]
        test edx, edx
        mov dword ptr ss : [ebp-0x14], edx
        je public_6d4c248
        mov dword ptr ds : [ebx], eax
        sub eax, 0
        je public_6d4c232
        dec eax
        je public_6d4c1fd
        dec eax
        je public_6d4c1bd
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2F
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d4c248
        public_6d4c1bd : nop
        mov edx, dword ptr ds : [edi+0x2C]
        xor eax, eax
        mov dword ptr ss : [ebp-8], offset public_6d62068
        public_6d4c1c9 : nop
        mov ecx, offset public_6d62068
        public_6d4c1ce : nop
        mov ebx, dword ptr ss : [ebp-0x14]
        movzx ebx, word ptr ds : [ebx+eax*2]
        mov dword ptr ss : [ebp-0x18], ebx
        mov ebx, dword ptr ss : [ebp-8]
        fild dword ptr ss : [ebp-0x18]
        fmul qword ptr ds : [ecx]
        add ecx, 8
        fmul qword ptr ds : [ebx]
        mov ebx, offset public_6d620a8
        fstp dword ptr ds : [edx+eax*4]
        inc eax
        cmp ecx, ebx
        jl public_6d4c1ce
        add dword ptr ss : [ebp-8], 8
        cmp dword ptr ss : [ebp-8], ebx
        jl public_6d4c1c9
        jmp public_6d4c248
        public_6d4c1fd : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, offset public_6d61fe8
        mov dword ptr ss : [ebp-8], ecx
        sub edx, eax
        sub dword ptr ss : [ebp-8], eax
        public_6d4c20d : nop
        movsx ebx, word ptr ds : [eax]
        movsx ecx, word ptr ds : [edx+eax]
        imul ecx, ebx
        mov ebx, dword ptr ss : [ebp-8]
        add ecx, 0x800
        sar ecx, 0xC
        mov word ptr ds : [ebx+eax], cx
        inc eax
        inc eax
        cmp eax, offset public_6d62068
        jl public_6d4c20d
        jmp public_6d4c248
        public_6d4c232 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, edx
        push 0x40
        sub ecx, eax
        pop edx
        public_6d4c23c : nop
        mov bx, word ptr ds : [ecx+eax]
        mov word ptr ds : [eax], bx
        inc eax
        inc eax
        dec edx
        jne public_6d4c23c
        public_6d4c248 : nop
        inc dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        add ebx, 4
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp-0x10], ebx
        jl public_6d4c0e8
        pop ebx
        public_6d4c264 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c0b1)
    }
}

#undef public_6d4c0e8
#undef public_6d4c0ea
#undef public_6d4c110
#undef public_6d4c126
#undef public_6d4c12e
#undef public_6d4c13a
#undef public_6d4c14a
#undef public_6d4c153
#undef public_6d4c15c
#undef public_6d4c165
#undef public_6d4c16c
#undef public_6d4c16f
#undef public_6d4c1bd
#undef public_6d4c1c9
#undef public_6d4c1ce
#undef public_6d4c1fd
#undef public_6d4c20d
#undef public_6d4c232
#undef public_6d4c23c
#undef public_6d4c248
#undef public_6d4c264
