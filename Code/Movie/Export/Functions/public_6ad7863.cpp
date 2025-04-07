#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad14b5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7863);
CLANG_FORWARD_PROC_SYMBOL(public_6ad79e5);

#define public_6ad789a _public_6ad789a
#define public_6ad78a7 _public_6ad78a7
#define public_6ad78b4 _public_6ad78b4
#define public_6ad78c1 _public_6ad78c1
#define public_6ad78de _public_6ad78de
#define public_6ad78e9 _public_6ad78e9
#define public_6ad78fb _public_6ad78fb
#define public_6ad7916 _public_6ad7916
#define public_6ad7929 _public_6ad7929
#define public_6ad7930 _public_6ad7930
#define public_6ad7942 _public_6ad7942
#define public_6ad795d _public_6ad795d
#define public_6ad7979 _public_6ad7979
#define public_6ad7999 _public_6ad7999
#define public_6ad799b _public_6ad799b
#define public_6ad79a9 _public_6ad79a9
#define public_6ad79ba _public_6ad79ba
#define public_6ad79cc _public_6ad79cc
#define public_6ad79de _public_6ad79de
#define public_6ad79e0 _public_6ad79e0

PROC_DECLARE(0x6ad7863, internal_6ad7863, public_6ad7863);
extern "C" NAKED register_t __cdecl internal_6ad7863()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        dec eax
        push ebx
        push esi
        dec eax
        push edi
        je public_6ad78de
        dec eax
        dec eax
        je public_6ad78c1
        sub eax, 4
        je public_6ad78c1
        sub eax, 3
        je public_6ad78c1
        sub eax, 4
        je public_6ad78b4
        sub eax, 6
        je public_6ad78a7
        dec eax
        je public_6ad789a
        or eax, 0xFFFFFFFF
        jmp public_6ad79e0
        public_6ad789a : nop
        mov ebx, dword ptr ds : [public_6ae1118]
        mov edi, offset public_6ae1118
        jmp public_6ad78e9
        public_6ad78a7 : nop
        mov ebx, dword ptr ds : [public_6ae1114]
        mov edi, offset public_6ae1114
        jmp public_6ad78e9
        public_6ad78b4 : nop
        mov ebx, dword ptr ds : [public_6ae111c]
        mov edi, offset public_6ae111c
        jmp public_6ad78e9
        public_6ad78c1 : nop
        call public_6ad1381
        mov esi, eax
        push dword ptr ds : [esi+0x50]
        push dword ptr ss : [ebp+8]
        call public_6ad79e5
        mov edi, eax
        pop ecx
        add edi, 8
        pop ecx
        mov ebx, dword ptr ds : [edi]
        jmp public_6ad78fb
        public_6ad78de : nop
        mov ebx, dword ptr ds : [public_6ae1110]
        mov edi, offset public_6ae1110
        public_6ad78e9 : nop
        push 1
        mov dword ptr ss : [ebp-4], 1
        call public_6ad237a
        mov esi, dword ptr ss : [ebp+8]
        pop ecx
        public_6ad78fb : nop
        cmp ebx, 1
        jne public_6ad7916
        cmp dword ptr ss : [ebp-4], 0
        je public_6ad79de
        push ebx
        call public_6ad23db
        pop ecx
        jmp public_6ad79de
        public_6ad7916 : nop
        xor ecx, ecx
        cmp ebx, ecx
        jne public_6ad7930
        cmp dword ptr ss : [ebp-4], ecx
        je public_6ad7929
        push 1
        call public_6ad23db
        pop ecx
        public_6ad7929 : nop
        push 3
        call public_6ad14b5
        public_6ad7930 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 8
        je public_6ad7942
        cmp eax, 0xB
        je public_6ad7942
        cmp eax, 4
        jne public_6ad795d
        public_6ad7942 : nop
        mov edx, dword ptr ds : [esi+0x54]
        cmp eax, 8
        mov dword ptr ss : [ebp-8], edx
        mov dword ptr ds : [esi+0x54], ecx
        jne public_6ad7999
        mov edx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x58], 0x8C
        mov dword ptr ss : [ebp-0xC], edx
        public_6ad795d : nop
        cmp eax, 8
        jne public_6ad7999
        mov ecx, dword ptr ds : [public_6adfcf8]
        mov eax, dword ptr ds : [public_6adfcfc]
        add eax, ecx
        cmp ecx, eax
        jge public_6ad799b
        lea eax, ds:[ecx+ecx*2]
        shl eax, 2
        public_6ad7979 : nop
        mov edx, dword ptr ds : [esi+0x50]
        add eax, 0xC
        and dword ptr ds : [edx+eax-4], 0
        mov edx, dword ptr ds : [public_6adfcf8]
        mov edi, dword ptr ds : [public_6adfcfc]
        inc ecx
        add edi, edx
        cmp ecx, edi
        jl public_6ad7979
        jmp public_6ad799b
        public_6ad7999 : nop
        mov dword ptr ds : [edi], ecx
        public_6ad799b : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6ad79a9
        push 1
        call public_6ad23db
        pop ecx
        public_6ad79a9 : nop
        cmp dword ptr ss : [ebp+8], 8
        jne public_6ad79ba
        push dword ptr ds : [esi+0x58]
        push 8
        call ebx
        pop ecx
        pop ecx
        jmp public_6ad79cc
        public_6ad79ba : nop
        push dword ptr ss : [ebp+8]
        call ebx
        cmp dword ptr ss : [ebp+8], 0xB
        pop ecx
        je public_6ad79cc
        cmp dword ptr ss : [ebp+8], 4
        jne public_6ad79de
        public_6ad79cc : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp+8], 8
        mov dword ptr ds : [esi+0x54], eax
        jne public_6ad79de
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+0x58], eax
        public_6ad79de : nop
        xor eax, eax
        public_6ad79e0 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad7863)
    }
}

#undef public_6ad789a
#undef public_6ad78a7
#undef public_6ad78b4
#undef public_6ad78c1
#undef public_6ad78de
#undef public_6ad78e9
#undef public_6ad78fb
#undef public_6ad7916
#undef public_6ad7929
#undef public_6ad7930
#undef public_6ad7942
#undef public_6ad795d
#undef public_6ad7979
#undef public_6ad7999
#undef public_6ad799b
#undef public_6ad79a9
#undef public_6ad79ba
#undef public_6ad79cc
#undef public_6ad79de
#undef public_6ad79e0
