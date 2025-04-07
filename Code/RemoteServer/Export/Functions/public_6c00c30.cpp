#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd56c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd56d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c00f80);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6c00c7d _public_6c00c7d
#define public_6c00c97 _public_6c00c97
#define public_6c00cc1 _public_6c00cc1
#define public_6c00ced _public_6c00ced
#define public_6c00d19 _public_6c00d19
#define public_6c00d40 _public_6c00d40
#define public_6c00d45 _public_6c00d45
#define public_6c00d5a _public_6c00d5a
#define public_6c00da0 _public_6c00da0
#define public_6c00da5 _public_6c00da5
#define public_6c00dad _public_6c00dad
#define public_6c00db2 _public_6c00db2
#define public_6c00dbe _public_6c00dbe
#define public_6c00e42 _public_6c00e42
#define public_6c00e5a _public_6c00e5a
#define public_6c00ea0 _public_6c00ea0
#define public_6c00eaf _public_6c00eaf
#define public_6c00ec4 _public_6c00ec4
#define public_6c00ed3 _public_6c00ed3
#define public_6c00ee0 _public_6c00ee0
#define public_6c00eed _public_6c00eed
#define public_6c00ef3 _public_6c00ef3
#define public_6c00f14 _public_6c00f14
#define public_6c00f21 _public_6c00f21
#define public_6c00f62 _public_6c00f62
#define public_6c00f6e _public_6c00f6e

PROC_DECLARE(0x6c00c30, internal_6c00c30, public_6c00c30);
extern "C" NAKED register_t __cdecl internal_6c00c30()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        lea ebp, ds:[ebx+0x10]
        push ebp
        push edi
        lea esi, ds:[ebx+0x18]
        push esi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6c00c7d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6c00c7d : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edx, 0x17
        jbe public_6c00c97
        mov dword ptr ss : [ebp+0xC], edx
        public_6c00c97 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6c00f6e
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x20], ecx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6c00cc1
        mov dword ptr ss : [ebp+0xC], edx
        public_6c00cc1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6c00f6e
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [ebx+0x24], cx
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6c00ced
        mov dword ptr ss : [ebp+0xC], edx
        public_6c00ced : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6c00f6e
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov ax, cx
        xor esi, esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x10], esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        jg public_6c00d45
        public_6c00d19 : nop
        push ebp
        push edi
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6c00f21
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6c00d40 : nop
        mov edx, 0x17
        public_6c00d45 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6c00d5a
        mov dword ptr ss : [ebp+0xC], edx
        public_6c00d5a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6c00f14
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        lea esi, ds:[ebx+0x28]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x28], edx
        mov edi, eax
        jae public_6c00e5a
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6c00da0
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6c00da5
        public_6c00da0 : nop
        mov ecx, 1
        public_6c00da5 : nop
        test edx, edx
        jne public_6c00dad
        xor eax, eax
        jmp public_6c00db2
        public_6c00dad : nop
        sub eax, edx
        sar eax, 2
        public_6c00db2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6c00dbe
        xor eax, eax
        public_6c00dbe : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6c09d26
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6bd56d0
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6c00f80
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6bd56d0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6bd56c0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6c00e42
        xor ecx, ecx
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6c00ef3
        public_6c00e42 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        jmp public_6c00ef3
        public_6c00e5a : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6c00eaf
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6bd56d0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x28]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6c00f80
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6c00eed
        lea esp, ss:[esp]
        public_6c00ea0 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6c00ea0
        jmp public_6c00eed
        public_6c00eaf : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6bd56d0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6c00ed3
        public_6c00ec4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6c00ec4
        public_6c00ed3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6c00eed
        lea ebx, ds:[ebx]
        public_6c00ee0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6c00ee0
        public_6c00eed : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6c00ef3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6c00d40
        mov edi, dword ptr ss : [esp+0x2C]
        jmp public_6c00d19
        public_6c00f14 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6c00f21 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6c00f62
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6c00f62 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c00f6e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6c00c30)
    }
}

#undef public_6c00c7d
#undef public_6c00c97
#undef public_6c00cc1
#undef public_6c00ced
#undef public_6c00d19
#undef public_6c00d40
#undef public_6c00d45
#undef public_6c00d5a
#undef public_6c00da0
#undef public_6c00da5
#undef public_6c00dad
#undef public_6c00db2
#undef public_6c00dbe
#undef public_6c00e42
#undef public_6c00e5a
#undef public_6c00ea0
#undef public_6c00eaf
#undef public_6c00ec4
#undef public_6c00ed3
#undef public_6c00ee0
#undef public_6c00eed
#undef public_6c00ef3
#undef public_6c00f14
#undef public_6c00f21
#undef public_6c00f62
#undef public_6c00f6e
