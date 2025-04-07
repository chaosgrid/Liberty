#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f710);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8f735 _public_6d8f735
#define public_6d8f74d _public_6d8f74d
#define public_6d8f753 _public_6d8f753
#define public_6d8f77e _public_6d8f77e
#define public_6d8f782 _public_6d8f782
#define public_6d8f797 _public_6d8f797
#define public_6d8f7b4 _public_6d8f7b4
#define public_6d8f7c5 _public_6d8f7c5

PROC_DECLARE(0x6d8f710, internal_6d8f710, public_6d8f710);
extern "C" NAKED register_t __cdecl internal_6d8f710()
{
    __asm
    {
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_6d8f7c5
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d8f74d
        public_6d8f735 : nop
        cmp ebx, ecx
        je public_6d8f74d
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6d8f735
        public_6d8f74d : nop
        cmp eax, esi
        mov edi, eax
        je public_6d8f77e
        public_6d8f753 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d8f753
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d8f77e : nop
        cmp ebx, ecx
        je public_6d8f7c5
        public_6d8f782 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d8f797
        mov edi, eax
        public_6d8f797 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d8f7b4
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6d8f7b4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6d8f782
        public_6d8f7c5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d8f710)
    }
}

#undef public_6d8f735
#undef public_6d8f74d
#undef public_6d8f753
#undef public_6d8f77e
#undef public_6d8f782
#undef public_6d8f797
#undef public_6d8f7b4
#undef public_6d8f7c5
