#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6d90);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5d14 _public_6bd5d14
#define public_6bd5d4b _public_6bd5d4b
#define public_6bd5d62 _public_6bd5d62
#define public_6bd5d96 _public_6bd5d96
#define public_6bd5daf _public_6bd5daf
#define public_6bd5db4 _public_6bd5db4
#define public_6bd5de6 _public_6bd5de6
#define public_6bd5dfd _public_6bd5dfd
#define public_6bd5e31 _public_6bd5e31
#define public_6bd5e4a _public_6bd5e4a
#define public_6bd5e4f _public_6bd5e4f
#define public_6bd5e81 _public_6bd5e81
#define public_6bd5e98 _public_6bd5e98
#define public_6bd5ed5 _public_6bd5ed5
#define public_6bd5ef2 _public_6bd5ef2
#define public_6bd5f58 _public_6bd5f58
#define public_6bd5f73 _public_6bd5f73
#define public_6bd5fa9 _public_6bd5fa9
#define public_6bd5fc1 _public_6bd5fc1

PROC_DECLARE(0x6bd5cd0, internal_6bd5cd0, public_6bd5cd0);
extern "C" NAKED register_t __cdecl internal_6bd5cd0()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov dword ptr ss : [esp+0x10], ebp
        call dword ptr ds : [public_6c0b138]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6bd5d62
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5d4b
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6bd5d4b
        public_6bd5d14 : nop
        call public_6bd6bb0
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5d4b
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6bd5d14
        public_6bd5d4b : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_6bd5d62
        mov ecx, esi
        call public_6bd5fd0
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd5d62 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6bd5dfd
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5de6
        lea eax, ds:[ecx+4]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6bd5de6
        public_6bd5d96 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6bd5daf
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6bd5db4
        public_6bd5daf : nop
        call public_6bd6d90
        public_6bd5db4 : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5de6
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6bd5d96
        public_6bd5de6 : nop
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_6bd5dfd
        mov ecx, esi
        call public_6bd5fd0
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd5dfd : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_6bd5e98
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5e81
        lea eax, ds:[ecx+4]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6bd5e81
        public_6bd5e31 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6bd5e4a
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6bd5e4f
        public_6bd5e4a : nop
        call public_6bd6d90
        public_6bd5e4f : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6bd5e81
        lea edx, ds:[ecx+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6bd5e31
        public_6bd5e81 : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6bd5e98
        mov ecx, esi
        call public_6bd5fd0
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd5e98 : nop
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        je public_6bd5fc1
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push ebx
        jbe public_6bd5fa9
        lea eax, ds:[esi+4]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6bd5fa9
        public_6bd5ed5 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x2C]
        add edx, 4
        dec ecx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x2C], ecx
        je public_6bd5ef2
        cmp eax, dword ptr ds : [esi+8]
        jne public_6bd5f73
        public_6bd5ef2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6bd5f58
        lea ecx, ss:[esp+0x14]
        call public_6bd6ea0
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[esi+4]
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], ebx
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        mov dword ptr ss : [ebp+0xC], ebx
        call public_6c09aaa
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_6bd5f73
        public_6bd5f58 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov ebx, ecx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], eax
        public_6bd5f73 : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jbe public_6bd5fa9
        lea ecx, ds:[esi+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6bd5ed5
        public_6bd5fa9 : nop
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        pop ebx
        je public_6bd5fc1
        mov ecx, ebp
        call public_6bd5fd0
        push ebp
        call public_6c09aaa
        add esp, 4
        public_6bd5fc1 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6bd5cd0)
    }
}

#undef public_6bd5d14
#undef public_6bd5d4b
#undef public_6bd5d62
#undef public_6bd5d96
#undef public_6bd5daf
#undef public_6bd5db4
#undef public_6bd5de6
#undef public_6bd5dfd
#undef public_6bd5e31
#undef public_6bd5e4a
#undef public_6bd5e4f
#undef public_6bd5e81
#undef public_6bd5e98
#undef public_6bd5ed5
#undef public_6bd5ef2
#undef public_6bd5f58
#undef public_6bd5f73
#undef public_6bd5fa9
#undef public_6bd5fc1
