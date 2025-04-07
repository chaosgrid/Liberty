#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4057f);
CLANG_FORWARD_PROC_SYMBOL(public_6d4060d);
CLANG_FORWARD_PROC_SYMBOL(public_6d40908);
CLANG_FORWARD_PROC_SYMBOL(public_6d40f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d410c7);
CLANG_FORWARD_PROC_SYMBOL(public_6d4135b);
CLANG_FORWARD_PROC_SYMBOL(public_6d41584);
CLANG_FORWARD_PROC_SYMBOL(public_6d4165b);
CLANG_FORWARD_PROC_SYMBOL(public_6d416f7);
CLANG_FORWARD_PROC_SYMBOL(public_6d417ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d41865);

#define public_6d41871 _public_6d41871
#define public_6d4188e _public_6d4188e
#define public_6d41893 _public_6d41893
#define public_6d4189c _public_6d4189c
#define public_6d41904 _public_6d41904
#define public_6d41907 _public_6d41907
#define public_6d4190a _public_6d4190a
#define public_6d41924 _public_6d41924
#define public_6d4192a _public_6d4192a
#define public_6d4192c _public_6d4192c
#define public_6d4192e _public_6d4192e
#define public_6d41938 _public_6d41938
#define public_6d41943 _public_6d41943
#define public_6d41974 _public_6d41974
#define public_6d4197d _public_6d4197d
#define public_6d4198d _public_6d4198d
#define public_6d41993 _public_6d41993
#define public_6d4199a _public_6d4199a
#define public_6d419b9 _public_6d419b9
#define public_6d419c2 _public_6d419c2
#define public_6d419f1 _public_6d419f1
#define public_6d41a01 _public_6d41a01
#define public_6d41a09 _public_6d41a09
#define public_6d41a0f _public_6d41a0f
#define public_6d41a10 _public_6d41a10
#define public_6d41a14 _public_6d41a14
#define public_6d41a20 _public_6d41a20
#define public_6d41a2c _public_6d41a2c
#define public_6d41a34 _public_6d41a34
#define public_6d41a4c _public_6d41a4c
#define public_6d41a4e _public_6d41a4e

PROC_DECLARE(0x6d41865, internal_6d41865, public_6d41865);
extern "C" NAKED register_t __cdecl internal_6d41865()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, 0xDB
        public_6d41871 : nop
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x178], ebx
        jne public_6d4189c
        mov eax, dword ptr ds : [esi+0x190]
        cmp byte ptr ds : [eax+0x50], bl
        push esi
        jne public_6d4188e
        call public_6d417ce
        jmp public_6d41893
        public_6d4188e : nop
        call public_6d416f7
        public_6d41893 : nop
        test al, al
        pop ecx
        je public_6d41a4c
        public_6d4189c : nop
        mov eax, dword ptr ds : [esi+0x178]
        cmp eax, 0xCF
        jg public_6d41943
        cmp eax, 0xCD
        jge public_6d41938
        cmp eax, 0xC8
        jg public_6d4190a
        cmp eax, 0xC5
        jge public_6d41938
        xor ecx, ecx
        inc ecx
        cmp eax, ecx
        je public_6d4199a
        cmp eax, 0xBF
        jle public_6d41974
        cmp eax, 0xC1
        jle public_6d41907
        cmp eax, 0xC2
        je public_6d41904
        cmp eax, 0xC3
        je public_6d41938
        cmp eax, 0xC4
        jne public_6d41974
        mov ebx, esi
        call public_6d410c7
        jmp public_6d41a10
        public_6d41904 : nop
        push ebx
        jmp public_6d4192e
        public_6d41907 : nop
        push ebx
        jmp public_6d4192c
        public_6d4190a : nop
        sub eax, 0xC9
        je public_6d4192a
        dec eax
        je public_6d41924
        dec eax
        je public_6d41938
        dec eax
        jne public_6d41974
        call public_6d40f70
        jmp public_6d41a10
        public_6d41924 : nop
        xor ecx, ecx
        inc ecx
        push ecx
        jmp public_6d4192e
        public_6d4192a : nop
        push 1
        public_6d4192c : nop
        xor cl, cl
        public_6d4192e : nop
        call public_6d4060d
        jmp public_6d41a0f
        public_6d41938 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x3B
        jmp public_6d4197d
        public_6d41943 : nop
        cmp eax, edi
        jg public_6d419c2
        je public_6d419b9
        cmp eax, 0xD0
        jl public_6d41974
        cmp eax, 0xD7
        jle public_6d4199a
        cmp eax, 0xD8
        je public_6d41993
        cmp eax, 0xD9
        je public_6d41a34
        cmp eax, 0xDA
        je public_6d41a20
        public_6d41974 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x43
        public_6d4197d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x178]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        public_6d4198d : nop
        pop ecx
        jmp public_6d41a14
        public_6d41993 : nop
        call public_6d4057f
        jmp public_6d41a10
        public_6d4199a : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x5B
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x178]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        jmp public_6d4198d
        public_6d419b9 : nop
        mov ebx, esi
        call public_6d4135b
        jmp public_6d41a10
        public_6d419c2 : nop
        cmp eax, 0xDC
        je public_6d41a09
        cmp eax, 0xDD
        je public_6d41a01
        cmp eax, 0xDF
        jle public_6d41974
        cmp eax, 0xEF
        jle public_6d419f1
        cmp eax, 0xFE
        jne public_6d41974
        mov eax, dword ptr ds : [esi+0x190]
        push esi
        call dword ptr ds : [eax+0xC]
        jmp public_6d41a0f
        public_6d419f1 : nop
        mov ecx, dword ptr ds : [esi+0x190]
        push esi
        call dword ptr ds : [ecx+eax*4-0x370]
        jmp public_6d41a0f
        public_6d41a01 : nop
        push esi
        call public_6d41584
        jmp public_6d41a0f
        public_6d41a09 : nop
        push esi
        call public_6d4165b
        public_6d41a0f : nop
        pop ecx
        public_6d41a10 : nop
        test al, al
        je public_6d41a4c
        public_6d41a14 : nop
        and dword ptr ds : [esi+0x178], 0
        jmp public_6d41871
        public_6d41a20 : nop
        call public_6d40908
        test al, al
        je public_6d41a4c
        xor eax, eax
        inc eax
        public_6d41a2c : nop
        mov dword ptr ds : [esi+0x178], ebx
        jmp public_6d41a4e
        public_6d41a34 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x54
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        push 2
        pop eax
        jmp public_6d41a2c
        public_6d41a4c : nop
        xor eax, eax
        public_6d41a4e : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d41865)
    }
}

#undef public_6d41871
#undef public_6d4188e
#undef public_6d41893
#undef public_6d4189c
#undef public_6d41904
#undef public_6d41907
#undef public_6d4190a
#undef public_6d41924
#undef public_6d4192a
#undef public_6d4192c
#undef public_6d4192e
#undef public_6d41938
#undef public_6d41943
#undef public_6d41974
#undef public_6d4197d
#undef public_6d4198d
#undef public_6d41993
#undef public_6d4199a
#undef public_6d419b9
#undef public_6d419c2
#undef public_6d419f1
#undef public_6d41a01
#undef public_6d41a09
#undef public_6d41a0f
#undef public_6d41a10
#undef public_6d41a14
#undef public_6d41a20
#undef public_6d41a2c
#undef public_6d41a34
#undef public_6d41a4c
#undef public_6d41a4e
