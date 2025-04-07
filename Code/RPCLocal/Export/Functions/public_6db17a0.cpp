#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6db17e2 _public_6db17e2
#define public_6db17f9 _public_6db17f9
#define public_6db182a _public_6db182a
#define public_6db1870 _public_6db1870
#define public_6db18ac _public_6db18ac
#define public_6db18b8 _public_6db18b8

PROC_DECLARE(0x6db17a0, internal_6db17a0, public_6db17a0);
extern "C" NAKED register_t __cdecl internal_6db17a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebx, ss:[ebp+0x10]
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
        je public_6db17e2
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db17e2 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db17f9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db17f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db18b8
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x20], edx
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x80
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db182a
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db182a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db18b8
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        mov esi, eax
        mov ecx, 0x20
        lea edi, ss:[ebp+0x24]
        rep movsd
        lea ecx, ds:[eax+0x80]
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        pop edi
        je public_6db1870
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db1870 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
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
        jbe public_6db18ac
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6db18ac : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6db18b8 : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6db17a0)
    }
}

#undef public_6db17e2
#undef public_6db17f9
#undef public_6db182a
#undef public_6db1870
#undef public_6db18ac
#undef public_6db18b8
