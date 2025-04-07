#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d90290);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d902c0 _public_6d902c0
#define public_6d902e8 _public_6d902e8
#define public_6d902f0 _public_6d902f0
#define public_6d9031b _public_6d9031b
#define public_6d90321 _public_6d90321
#define public_6d90336 _public_6d90336
#define public_6d90359 _public_6d90359
#define public_6d9036e _public_6d9036e

PROC_DECLARE(0x6d90290, internal_6d90290, public_6d90290);
extern "C" NAKED register_t __cdecl internal_6d90290()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        add ecx, 0x24
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d9036e
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        je public_6d902e8
        lea ebx, ds:[ebx]
        public_6d902c0 : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_6d902e8
        lea ecx, ds:[ebx+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_6d902c0
        public_6d902e8 : nop
        cmp eax, esi
        mov edi, eax
        je public_6d9031b
        mov edi, edi
        public_6d902f0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6db1dc2
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d902f0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d9031b : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_6d9036e
        public_6d90321 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d90336
        mov edi, eax
        public_6d90336 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6d90359
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6d90359 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6d90321
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d9036e : nop
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov edx, dword ptr ds : [ecx+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [ecx+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d90290)
    }
}

#undef public_6d902c0
#undef public_6d902e8
#undef public_6d902f0
#undef public_6d9031b
#undef public_6d90321
#undef public_6d90336
#undef public_6d90359
#undef public_6d9036e
