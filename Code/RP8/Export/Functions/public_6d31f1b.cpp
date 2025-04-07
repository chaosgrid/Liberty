#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31f1b);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf14);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf1a);

#define public_6d31f35 _public_6d31f35
#define public_6d31f52 _public_6d31f52
#define public_6d31f68 _public_6d31f68
#define public_6d31f88 _public_6d31f88
#define public_6d31f97 _public_6d31f97
#define public_6d31fa5 _public_6d31fa5
#define public_6d31fb1 _public_6d31fb1
#define public_6d31fbb _public_6d31fbb
#define public_6d31fc8 _public_6d31fc8
#define public_6d31fce _public_6d31fce
#define public_6d32001 _public_6d32001
#define public_6d32051 _public_6d32051
#define public_6d3206d _public_6d3206d
#define public_6d32092 _public_6d32092
#define public_6d32097 _public_6d32097
#define public_6d320e7 _public_6d320e7
#define public_6d320ea _public_6d320ea
#define public_6d320ee _public_6d320ee
#define public_6d320f1 _public_6d320f1
#define public_6d320fc _public_6d320fc
#define public_6d32101 _public_6d32101
#define public_6d32102 _public_6d32102
#define public_6d32108 _public_6d32108
#define public_6d32122 _public_6d32122
#define public_6d32128 _public_6d32128
#define public_6d3217c _public_6d3217c
#define public_6d32190 _public_6d32190
#define public_6d32197 _public_6d32197

PROC_DECLARE(0x6d31f1b, internal_6d31f1b, public_6d31f1b);
extern "C" NAKED register_t __cdecl internal_6d31f1b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        cmp dword ptr ss : [ebp+0xC], 2
        push ebx
        push esi
        mov esi, ecx
        jae public_6d31f35
        mov eax, 0x80004005
        jmp public_6d32102
        public_6d31f35 : nop
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edi]
        cmp al, 0x50
        jne public_6d320fc
        cmp byte ptr ds : [edi+1], 0x33
        jne public_6d31f52
        mov dword ptr ss : [ebp-0x18], 1
        jmp public_6d31f68
        public_6d31f52 : nop
        cmp al, 0x50
        jne public_6d320fc
        cmp byte ptr ds : [edi+1], 0x36
        jne public_6d320fc
        and dword ptr ss : [ebp-0x18], 0
        public_6d31f68 : nop
        push 0
        add edi, 2
        sub dword ptr ss : [ebp+0xC], 2
        pop ebx
        mov dword ptr ss : [ebp-0xC], edi
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ss : [ebp-0x14], ebx
        mov dword ptr ss : [ebp-8], 0xFF
        je public_6d320fc
        public_6d31f88 : nop
        cmp dword ptr ss : [ebp-0x18], ebx
        jne public_6d31f97
        cmp dword ptr ss : [ebp-4], 3
        je public_6d32108
        public_6d31f97 : nop
        movzx eax, byte ptr ds : [edi]
        push eax
        call public_6d5cf1a
        test eax, eax
        pop ecx
        je public_6d31fb1
        public_6d31fa5 : nop
        inc edi
        dec dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], edi
        jmp public_6d320f1
        public_6d31fb1 : nop
        cmp byte ptr ds : [edi], 0x23
        jne public_6d31fc8
        cmp dword ptr ss : [ebp+0xC], ebx
        je public_6d31fa5
        public_6d31fbb : nop
        cmp byte ptr ds : [edi], 0xA
        je public_6d31fa5
        inc edi
        dec dword ptr ss : [ebp+0xC]
        jne public_6d31fbb
        jmp public_6d31fa5
        public_6d31fc8 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d32001
        public_6d31fce : nop
        movzx eax, byte ptr ds : [edi]
        push eax
        call public_6d5cf1a
        test eax, eax
        pop ecx
        jne public_6d32001
        movzx eax, byte ptr ds : [edi]
        push eax
        call public_6d5cf14
        test eax, eax
        pop ecx
        je public_6d320fc
        movzx ecx, byte ptr ds : [edi]
        inc edi
        dec dword ptr ss : [ebp+0xC]
        lea eax, ds:[ebx+ebx*4]
        lea ebx, ds:[ecx+eax*2-0x30]
        mov dword ptr ss : [ebp-0xC], edi
        jne public_6d31fce
        public_6d32001 : nop
        mov eax, dword ptr ss : [ebp-4]
        sub eax, 0
        je public_6d320e7
        dec eax
        je public_6d32097
        dec eax
        je public_6d32092
        dec eax
        je public_6d3206d
        dec eax
        je public_6d32051
        dec eax
        jne public_6d320ee
        mov eax, ebx
        imul eax, 0xFF
        xor edx, edx
        div dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], eax
        add ecx, 4
        cmp ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp+8], ecx
        je public_6d32190
        mov dword ptr ss : [ebp-4], 2
        jmp public_6d320ee
        public_6d32051 : nop
        mov eax, ebx
        imul eax, 0xFF
        xor edx, edx
        div dword ptr ss : [ebp-8]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        shl ecx, 8
        or dword ptr ds : [eax], ecx
        jmp public_6d320ee
        public_6d3206d : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [ebp-0x10]
        jae public_6d320fc
        mov eax, ebx
        imul eax, 0xFF
        xor edx, edx
        div dword ptr ss : [ebp-8]
        or eax, 0xFFFFFF00
        shl eax, 0x10
        mov dword ptr ds : [ecx], eax
        jmp public_6d320ee
        public_6d32092 : nop
        mov dword ptr ss : [ebp-8], ebx
        jmp public_6d320ea
        public_6d32097 : nop
        test ebx, ebx
        je public_6d320fc
        mov edi, ebx
        imul edi, dword ptr ss : [ebp-0x14]
        shl edi, 2
        push edi
        call public_6d2f2a0
        test eax, eax
        pop ecx
        mov dword ptr ds : [esi+4], eax
        je public_6d32197
        add edi, eax
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x14]
        xor ecx, ecx
        inc ecx
        mov edx, eax
        shl edx, 2
        and dword ptr ds : [esi+0x34], 0
        mov dword ptr ss : [ebp-0x10], edi
        mov edi, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+0x38], ecx
        mov dword ptr ds : [esi], 0x16
        mov dword ptr ds : [esi+0x30], edx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ecx
        jmp public_6d320ee
        public_6d320e7 : nop
        mov dword ptr ss : [ebp-0x14], ebx
        public_6d320ea : nop
        test ebx, ebx
        je public_6d320fc
        public_6d320ee : nop
        inc dword ptr ss : [ebp-4]
        public_6d320f1 : nop
        xor ebx, ebx
        cmp dword ptr ss : [ebp+0xC], ebx
        jne public_6d31f88
        public_6d320fc : nop
        mov eax, 0x80004005
        public_6d32101 : nop
        pop edi
        public_6d32102 : nop
        pop esi
        pop ebx
        leave 
        ret 8
        public_6d32108 : nop
        mov esi, dword ptr ss : [ebp-8]
        cmp esi, 0xFF
        ja public_6d320fc
        cmp dword ptr ss : [ebp+0xC], 1
        jbe public_6d32122
        cmp byte ptr ds : [edi], 0xD
        jne public_6d32122
        inc edi
        dec dword ptr ss : [ebp+0xC]
        public_6d32122 : nop
        inc edi
        dec dword ptr ss : [ebp+0xC]
        je public_6d3217c
        public_6d32128 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [ebp-0x10]
        jae public_6d3217c
        movzx eax, byte ptr ds : [edi]
        imul eax, 0xFF
        xor edx, edx
        div esi
        xor edx, edx
        add edi, 3
        mov ebx, eax
        movzx eax, byte ptr ds : [edi-2]
        imul eax, 0xFF
        div esi
        or ebx, 0xFFFFFF00
        shl ebx, 8
        xor edx, edx
        or ebx, eax
        movzx eax, byte ptr ds : [edi-1]
        imul eax, 0xFF
        div esi
        shl ebx, 8
        or ebx, eax
        mov dword ptr ds : [ecx], ebx
        add ecx, 4
        sub dword ptr ss : [ebp+0xC], 3
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d32128
        public_6d3217c : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, dword ptr ss : [ebp-0x10]
        neg eax
        sbb eax, eax
        and eax, 0x80004005
        jmp public_6d32101
        public_6d32190 : nop
        xor eax, eax
        jmp public_6d32101
        public_6d32197 : nop
        mov eax, 0x8007000E
        jmp public_6d32101
        UNREACHABLE_TRAP(0x6d31f1b)
    }
}

#undef public_6d31f35
#undef public_6d31f52
#undef public_6d31f68
#undef public_6d31f88
#undef public_6d31f97
#undef public_6d31fa5
#undef public_6d31fb1
#undef public_6d31fbb
#undef public_6d31fc8
#undef public_6d31fce
#undef public_6d32001
#undef public_6d32051
#undef public_6d3206d
#undef public_6d32092
#undef public_6d32097
#undef public_6d320e7
#undef public_6d320ea
#undef public_6d320ee
#undef public_6d320f1
#undef public_6d320fc
#undef public_6d32101
#undef public_6d32102
#undef public_6d32108
#undef public_6d32122
#undef public_6d32128
#undef public_6d3217c
#undef public_6d32190
#undef public_6d32197
