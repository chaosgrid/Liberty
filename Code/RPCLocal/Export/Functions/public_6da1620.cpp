#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da163f _public_6da163f
#define public_6da167b _public_6da167b
#define public_6da16a5 _public_6da16a5

PROC_DECLARE(0x6da1620, internal_6da1620, public_6da1620);
extern "C" NAKED register_t __cdecl internal_6da1620()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add edx, 4
        push esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ds : [ebx+0x10], edx
        mov esi, 0x17
        jbe public_6da163f
        mov dword ptr ds : [ebx+0x1C], esi
        public_6da163f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da16a5
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov edx, dword ptr ds : [edi]
        push edx
        call public_6db1f8a
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], edx
        jbe public_6da167b
        mov dword ptr ds : [ebx+0x1C], esi
        public_6da167b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da16a5
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x18]
        mov edi, dword ptr ds : [edi+4]
        mov ecx, eax
        push ebp
        mov ebp, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        add edx, eax
        rep movsb
        mov dword ptr ds : [ebx+0x18], edx
        xor eax, eax
        pop ebp
        public_6da16a5 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6da1620)
    }
}

#undef public_6da163f
#undef public_6da167b
#undef public_6da16a5
