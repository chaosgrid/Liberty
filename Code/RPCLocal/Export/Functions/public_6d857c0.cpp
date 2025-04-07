#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d857c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d86660);
CLANG_FORWARD_PROC_SYMBOL(public_6d86840);
CLANG_FORWARD_PROC_SYMBOL(public_6d86950);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d85804 _public_6d85804
#define public_6d8583b _public_6d8583b
#define public_6d85852 _public_6d85852
#define public_6d85886 _public_6d85886
#define public_6d8589f _public_6d8589f
#define public_6d858a4 _public_6d858a4
#define public_6d858d6 _public_6d858d6
#define public_6d858ed _public_6d858ed
#define public_6d85921 _public_6d85921
#define public_6d8593a _public_6d8593a
#define public_6d8593f _public_6d8593f
#define public_6d85971 _public_6d85971
#define public_6d85988 _public_6d85988
#define public_6d859c5 _public_6d859c5
#define public_6d859e2 _public_6d859e2
#define public_6d85a48 _public_6d85a48
#define public_6d85a63 _public_6d85a63
#define public_6d85a99 _public_6d85a99
#define public_6d85ab1 _public_6d85ab1

PROC_DECLARE(0x6d857c0, internal_6d857c0, public_6d857c0);
extern "C" NAKED register_t __cdecl internal_6d857c0()
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
        call dword ptr ds : [public_6db3124]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6d85852
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d8583b
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
        je public_6d8583b
        public_6d85804 : nop
        call public_6d86660
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d8583b
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
        jne public_6d85804
        public_6d8583b : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_6d85852
        mov ecx, esi
        call public_6d85ac0
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d85852 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d858ed
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d858d6
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
        je public_6d858d6
        public_6d85886 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6d8589f
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d858a4
        public_6d8589f : nop
        call public_6d86840
        public_6d858a4 : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d858d6
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
        jne public_6d85886
        public_6d858d6 : nop
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_6d858ed
        mov ecx, esi
        call public_6d85ac0
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d858ed : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_6d85988
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d85971
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
        je public_6d85971
        public_6d85921 : nop
        mov edi, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        add edi, 4
        dec edx
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, edi
        mov dword ptr ds : [ecx+0x2C], edx
        je public_6d8593a
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d8593f
        public_6d8593a : nop
        call public_6d86840
        public_6d8593f : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        jbe public_6d85971
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
        jne public_6d85921
        public_6d85971 : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6d85988
        mov ecx, esi
        call public_6d85ac0
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d85988 : nop
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        je public_6d85ab1
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        push ebx
        jbe public_6d85a99
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
        je public_6d85a99
        public_6d859c5 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x2C]
        add edx, 4
        dec ecx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x2C], ecx
        je public_6d859e2
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d85a63
        public_6d859e2 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6d85a48
        lea ecx, ss:[esp+0x14]
        call public_6d86950
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
        call public_6db1dc2
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_6d85a63
        public_6d85a48 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov ebx, ecx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], eax
        public_6d85a63 : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jbe public_6d85a99
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
        jne public_6d859c5
        public_6d85a99 : nop
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        pop ebx
        je public_6d85ab1
        mov ecx, ebp
        call public_6d85ac0
        push ebp
        call public_6db1dc2
        add esp, 4
        public_6d85ab1 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d857c0)
    }
}

#undef public_6d85804
#undef public_6d8583b
#undef public_6d85852
#undef public_6d85886
#undef public_6d8589f
#undef public_6d858a4
#undef public_6d858d6
#undef public_6d858ed
#undef public_6d85921
#undef public_6d8593a
#undef public_6d8593f
#undef public_6d85971
#undef public_6d85988
#undef public_6d859c5
#undef public_6d859e2
#undef public_6d85a48
#undef public_6d85a63
#undef public_6d85a99
#undef public_6d85ab1
