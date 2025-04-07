#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b67ab4 _public_6b67ab4
#define public_6b67acc _public_6b67acc
#define public_6b67af1 _public_6b67af1
#define public_6b67b1b _public_6b67b1b
#define public_6b67b2e _public_6b67b2e
#define public_6b67b78 _public_6b67b78
#define public_6b67ba6 _public_6b67ba6
#define public_6b67bda _public_6b67bda
#define public_6b67c18 _public_6b67c18
#define public_6b67c24 _public_6b67c24

PROC_DECLARE(0x6b67a70, internal_6b67a70, public_6b67a70);
extern "C" NAKED register_t __cdecl internal_6b67a70()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b67ab4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b67ab4 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6b67acc
        mov dword ptr ds : [ebx+0xC], edi
        public_6b67acc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b67c24
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, edx
        cmp eax, ecx
        jbe public_6b67af1
        mov dword ptr ds : [ebx+0xC], edi
        public_6b67af1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b67c24
        mov ecx, dword ptr ss : [ebp+0x28]
        push ecx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0x2C], eax
        jne public_6b67b1b
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b67b1b : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b67b2e
        mov dword ptr ds : [ebx+0xC], edi
        public_6b67b2e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b67c24
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x2C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ecx+eax]
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b67b78
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b67b78 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b67c24
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b67ba6
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b67ba6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b67c24
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x24], edx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b67bda
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b67bda : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6b4ecd0
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
        jbe public_6b67c18
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b67c18 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b67c24 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b67a70)
    }
}

#undef public_6b67ab4
#undef public_6b67acc
#undef public_6b67af1
#undef public_6b67b1b
#undef public_6b67b2e
#undef public_6b67b78
#undef public_6b67ba6
#undef public_6b67bda
#undef public_6b67c18
#undef public_6b67c24
