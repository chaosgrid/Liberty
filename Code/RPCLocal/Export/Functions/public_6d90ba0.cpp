#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d90be4 _public_6d90be4
#define public_6d90bfc _public_6d90bfc
#define public_6d90c26 _public_6d90c26
#define public_6d90c61 _public_6d90c61
#define public_6d90cb4 _public_6d90cb4
#define public_6d90cf0 _public_6d90cf0
#define public_6d90cfc _public_6d90cfc

PROC_DECLARE(0x6d90ba0, internal_6d90ba0, public_6d90ba0);
extern "C" NAKED register_t __cdecl internal_6d90ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d90be4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d90be4 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6d90bfc
        mov dword ptr ds : [ebx+0xC], edi
        public_6d90bfc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d90cfc
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x24], edx
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d90c26
        mov dword ptr ds : [ebx+0xC], edi
        public_6d90c26 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d90cfc
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        push edx
        mov dword ptr ss : [ebp+0x28], ecx
        mov dword ptr ds : [esi], eax
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d90c61
        mov dword ptr ds : [ebx+0xC], edi
        public_6d90c61 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d90cfc
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d90cb4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d90cb4 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6d90cf0
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6d90cf0 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d90cfc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d90ba0)
    }
}

#undef public_6d90be4
#undef public_6d90bfc
#undef public_6d90c26
#undef public_6d90c61
#undef public_6d90cb4
#undef public_6d90cf0
#undef public_6d90cfc
