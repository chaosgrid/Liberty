#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d98727 _public_6d98727
#define public_6d9873e _public_6d9873e
#define public_6d98750 _public_6d98750
#define public_6d98773 _public_6d98773
#define public_6d98785 _public_6d98785
#define public_6d987ae _public_6d987ae
#define public_6d987c0 _public_6d987c0
#define public_6d987e7 _public_6d987e7
#define public_6d98809 _public_6d98809
#define public_6d9883a _public_6d9883a

PROC_DECLARE(0x6d986e0, internal_6d986e0, public_6d986e0);
extern "C" NAKED register_t __cdecl internal_6d986e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d98727
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d98727 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d9873e
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d9873e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98750
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d98750 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98773
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d98773 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98785
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d98785 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6d987e7
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d987ae
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d987ae : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d987c0
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d987c0 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        push edi
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x38]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        pop edi
        public_6d987e7 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d98809
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d98809 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6d9883a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d9883a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6d986e0)
    }
}

#undef public_6d98727
#undef public_6d9873e
#undef public_6d98750
#undef public_6d98773
#undef public_6d98785
#undef public_6d987ae
#undef public_6d987c0
#undef public_6d987e7
#undef public_6d98809
#undef public_6d9883a
