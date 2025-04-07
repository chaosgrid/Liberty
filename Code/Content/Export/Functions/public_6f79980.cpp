#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8560);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6f79980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f799a2 _public_6f799a2
#define public_6f799aa _public_6f799aa
#define public_6f799b5 _public_6f799b5
#define public_6f799bd _public_6f799bd
#define public_6f799d0 _public_6f799d0
#define public_6f799e8 _public_6f799e8
#define public_6f799f5 _public_6f799f5
#define public_6f79a0c _public_6f79a0c
#define public_6f79a2a _public_6f79a2a
#define public_6f79a2d _public_6f79a2d
#define public_6f79a32 _public_6f79a32
#define public_6f79a47 _public_6f79a47
#define public_6f79a4f _public_6f79a4f
#define public_6f79a57 _public_6f79a57
#define public_6f79a5f _public_6f79a5f
#define public_6f79a67 _public_6f79a67
#define public_6f79a73 _public_6f79a73
#define public_6f79a7b _public_6f79a7b
#define public_6f79a88 _public_6f79a88
#define public_6f79aa0 _public_6f79aa0
#define public_6f79ab0 _public_6f79ab0
#define public_6f79ace _public_6f79ace
#define public_6f79ae0 _public_6f79ae0
#define public_6f79ae8 _public_6f79ae8
#define public_6f79af1 _public_6f79af1
#define public_6f79b02 _public_6f79b02
#define public_6f79b19 _public_6f79b19
#define public_6f79b21 _public_6f79b21
#define public_6f79b27 _public_6f79b27
#define public_6f79b42 _public_6f79b42
#define public_6f79b5c _public_6f79b5c
#define public_6f79b6e _public_6f79b6e

PROC_DECLARE(0x6f79980, internal_6f79980, public_6f79980);
extern "C" NAKED register_t __cdecl internal_6f79980()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f79b6e
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6f799a2
        xor edx, edx
        jmp public_6f799aa
        public_6f799a2 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        sar edx, 7
        public_6f799aa : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f799b5
        xor eax, eax
        jmp public_6f799bd
        public_6f799b5 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 7
        public_6f799bd : nop
        cmp edx, eax
        ja public_6f79a47
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6f799e8
        mov edi, edi
        public_6f799d0 : nop
        push esi
        mov ecx, edi
        call public_6ef8560
        add esi, 0x80
        add edi, 0x80
        cmp esi, ebx
        jne public_6f799d0
        public_6f799e8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        cmp edi, ebx
        mov esi, edi
        je public_6f79a0c
        public_6f799f5 : nop
        push 0
        mov ecx, esi
        call public_6efa720
        add esi, 0x80
        cmp esi, ebx
        jne public_6f799f5
        mov edx, dword ptr ss : [esp+0x10]
        public_6f79a0c : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f79a2a
        mov ecx, dword ptr ds : [edx+4]
        xor eax, eax
        pop edi
        shl eax, 7
        pop esi
        add eax, ecx
        pop ebp
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop ebx
        pop ecx
        ret 4
        public_6f79a2a : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6f79a2d : nop
        sub eax, ecx
        sar eax, 7
        public_6f79a32 : nop
        mov ecx, dword ptr ds : [edx+4]
        pop edi
        shl eax, 7
        pop esi
        add eax, ecx
        pop ebp
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop ebx
        pop ecx
        ret 4
        public_6f79a47 : nop
        test esi, esi
        jne public_6f79a4f
        xor edx, edx
        jmp public_6f79a57
        public_6f79a4f : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        sar edx, 7
        public_6f79a57 : nop
        test ecx, ecx
        jne public_6f79a5f
        xor eax, eax
        jmp public_6f79a67
        public_6f79a5f : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 7
        public_6f79a67 : nop
        cmp edx, eax
        ja public_6f79ae8
        test ecx, ecx
        jne public_6f79a73
        xor eax, eax
        jmp public_6f79a7b
        public_6f79a73 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 7
        public_6f79a7b : nop
        shl eax, 7
        add eax, esi
        mov edi, eax
        cmp esi, edi
        mov ebx, ecx
        je public_6f79aa0
        public_6f79a88 : nop
        push esi
        mov ecx, ebx
        call public_6ef8560
        add esi, 0x80
        add ebx, 0x80
        cmp esi, edi
        jne public_6f79a88
        public_6f79aa0 : nop
        mov ebp, dword ptr ss : [ebp+8]
        cmp edi, ebp
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, edi
        je public_6f79ace
        public_6f79ab0 : nop
        push esi
        push ebx
        call public_6ef8110
        add esi, 0x80
        add esp, 8
        add ebx, 0x80
        cmp esi, ebp
        jne public_6f79ab0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f79ace : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6f79ae0
        xor eax, eax
        jmp public_6f79a32
        public_6f79ae0 : nop
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f79a2d
        public_6f79ae8 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6f79b02
        public_6f79af1 : nop
        mov ecx, esi
        call public_6ef3e30
        add esi, 0x80
        cmp esi, edi
        jne public_6f79af1
        public_6f79b02 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_6f79b19
        xor eax, eax
        jmp public_6f79b21
        public_6f79b19 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 7
        public_6f79b21 : nop
        test eax, eax
        jge public_6f79b27
        xor eax, eax
        public_6f79b27 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f79b5c
        public_6f79b42 : nop
        push esi
        push edi
        call public_6ef8110
        add esi, 0x80
        add esp, 8
        add edi, 0x80
        cmp esi, ebx
        jne public_6f79b42
        public_6f79b5c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f79b6e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f79980)
    }
}

#undef public_6f799a2
#undef public_6f799aa
#undef public_6f799b5
#undef public_6f799bd
#undef public_6f799d0
#undef public_6f799e8
#undef public_6f799f5
#undef public_6f79a0c
#undef public_6f79a2a
#undef public_6f79a2d
#undef public_6f79a32
#undef public_6f79a47
#undef public_6f79a4f
#undef public_6f79a57
#undef public_6f79a5f
#undef public_6f79a67
#undef public_6f79a73
#undef public_6f79a7b
#undef public_6f79a88
#undef public_6f79aa0
#undef public_6f79ab0
#undef public_6f79ace
#undef public_6f79ae0
#undef public_6f79ae8
#undef public_6f79af1
#undef public_6f79b02
#undef public_6f79b19
#undef public_6f79b21
#undef public_6f79b27
#undef public_6f79b42
#undef public_6f79b5c
#undef public_6f79b6e
