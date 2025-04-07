#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da5e29 _public_6da5e29
#define public_6da5e40 _public_6da5e40
#define public_6da5e53 _public_6da5e53
#define public_6da5e78 _public_6da5e78
#define public_6da5e8b _public_6da5e8b
#define public_6da5ec9 _public_6da5ec9
#define public_6da5edc _public_6da5edc
#define public_6da5f01 _public_6da5f01
#define public_6da5f14 _public_6da5f14
#define public_6da5f51 _public_6da5f51
#define public_6da5f64 _public_6da5f64
#define public_6da5f90 _public_6da5f90
#define public_6da5fc3 _public_6da5fc3

PROC_DECLARE(0x6da5de0, internal_6da5de0, public_6da5de0);
extern "C" NAKED register_t __cdecl internal_6da5de0()
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
        push edi
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
        je public_6da5e29
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5e29 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6da5e40
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da5e40 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da5e53
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5e53 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x20]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6da5e78
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da5e78 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da5e8b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5e8b : nop
        mov edx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, edx
        lea edx, ss:[ebp+0x18]
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6da5ec9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da5ec9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da5edc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5edc : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6da5f01
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da5f01 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da5f14
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5f14 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [edx]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6da5f51
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6da5f51 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6da5f64
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5f64 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push edx
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6da5f90
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da5f90 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6da5fc3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6da5fc3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da5de0)
    }
}

#undef public_6da5e29
#undef public_6da5e40
#undef public_6da5e53
#undef public_6da5e78
#undef public_6da5e8b
#undef public_6da5ec9
#undef public_6da5edc
#undef public_6da5f01
#undef public_6da5f14
#undef public_6da5f51
#undef public_6da5f64
#undef public_6da5f90
#undef public_6da5fc3
