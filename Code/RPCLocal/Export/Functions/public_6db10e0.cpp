#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6db1122 _public_6db1122
#define public_6db1139 _public_6db1139
#define public_6db117b _public_6db117b
#define public_6db11af _public_6db11af
#define public_6db11cf _public_6db11cf
#define public_6db120d _public_6db120d
#define public_6db1219 _public_6db1219

PROC_DECLARE(0x6db10e0, internal_6db10e0, public_6db10e0);
extern "C" NAKED register_t __cdecl internal_6db10e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6db1122
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db1122 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db1139
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db1139 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1219
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], ecx
        jbe public_6db11af
        push eax
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp+0x20], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6db117b
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db117b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1219
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        public_6db11af : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6db11cf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db11cf : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6db120d
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6db120d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6db1219 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6db10e0)
    }
}

#undef public_6db1122
#undef public_6db1139
#undef public_6db117b
#undef public_6db11af
#undef public_6db11cf
#undef public_6db120d
#undef public_6db1219
