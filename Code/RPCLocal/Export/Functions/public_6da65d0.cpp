#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da6612 _public_6da6612
#define public_6da6629 _public_6da6629
#define public_6da6667 _public_6da6667
#define public_6da66b3 _public_6da66b3
#define public_6da66e1 _public_6da66e1
#define public_6da6714 _public_6da6714
#define public_6da6752 _public_6da6752
#define public_6da675e _public_6da675e

PROC_DECLARE(0x6da65d0, internal_6da65d0, public_6da65d0);
extern "C" NAKED register_t __cdecl internal_6da65d0()
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
        je public_6da6612
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da6612 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6da6629
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6da6629 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da675e
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        push eax
        mov dword ptr ss : [ebp+0x28], edx
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp+0x2C], eax
        mov edx, dword ptr ds : [ebx]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6da6667
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6da6667 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da675e
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [esi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        push edi
        mov edi, dword ptr ss : [ebp+0x2C]
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
        pop edi
        jbe public_6da66b3
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6da66b3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da675e
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
        jbe public_6da66e1
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6da66e1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da675e
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x24], edx
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6da6714
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da6714 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
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
        jbe public_6da6752
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6da6752 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da675e : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da65d0)
    }
}

#undef public_6da6612
#undef public_6da6629
#undef public_6da6667
#undef public_6da66b3
#undef public_6da66e1
#undef public_6da6714
#undef public_6da6752
#undef public_6da675e
