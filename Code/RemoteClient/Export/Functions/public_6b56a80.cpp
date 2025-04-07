#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b56ac7 _public_6b56ac7
#define public_6b56aee _public_6b56aee
#define public_6b56b1d _public_6b56b1d
#define public_6b56b44 _public_6b56b44
#define public_6b56b67 _public_6b56b67
#define public_6b56b78 _public_6b56b78
#define public_6b56b9d _public_6b56b9d
#define public_6b56bd1 _public_6b56bd1
#define public_6b56bf7 _public_6b56bf7
#define public_6b56c36 _public_6b56c36
#define public_6b56c5b _public_6b56c5b
#define public_6b56c9c _public_6b56c9c
#define public_6b56ca8 _public_6b56ca8

PROC_DECLARE(0x6b56a80, internal_6b56a80, public_6b56a80);
extern "C" NAKED register_t __cdecl internal_6b56a80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea ebp, ds:[ebx+0x10]
        push edi
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b56ac7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b56ac7 : nop
        xor eax, eax
        lea edx, ds:[ebx+0x20]
        mov ecx, 0x100
        mov edi, edx
        rep stosd
        stosw 
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edi
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6b56aee
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56aee : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56ca8
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [ebx+0x420], al
        mov dword ptr ds : [esi], ecx
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edi
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6b56b1d
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56b1d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56ca8
        mov edi, dword ptr ds : [esi]
        mov cl, byte ptr ds : [edi]
        inc edi
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [ebp+4]
        inc eax
        cmp eax, edi
        mov dword ptr ss : [ebp], eax
        jbe public_6b56b44
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56b44 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56ca8
        mov edi, dword ptr ds : [esi]
        mov al, byte ptr ds : [edi]
        inc edi
        mov dword ptr ds : [esi], edi
        movzx edi, cl
        cmp edi, 0x100
        mov byte ptr ss : [esp+0x18], al
        jbe public_6b56b67
        xor cl, cl
        public_6b56b67 : nop
        movzx edi, al
        cmp edi, 0x100
        jbe public_6b56b78
        xor al, al
        mov byte ptr ss : [esp+0x18], al
        public_6b56b78 : nop
        test cl, cl
        je public_6b56bd1
        mov edi, dword ptr ss : [ebp+4]
        xor eax, eax
        mov al, cl
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ds:[eax+eax]
        mov eax, dword ptr ss : [ebp]
        add eax, ecx
        cmp eax, edi
        mov dword ptr ss : [ebp], eax
        jbe public_6b56b9d
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56b9d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56ca8
        mov eax, dword ptr ds : [esi]
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+ecx*2]
        mov dword ptr ds : [ebx+0x18], eax
        mov al, byte ptr ss : [esp+0x18]
        mov word ptr ds : [ebx+ecx*2+0x20], 0
        public_6b56bd1 : nop
        test al, al
        je public_6b56c36
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        movzx eax, al
        lea edx, ds:[eax+eax]
        add esi, edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6b56bf7
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b56bf7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b56ca8
        mov esi, dword ptr ds : [ebx+0x18]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], esi
        lea edi, ds:[ebx+0x220]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x18], ecx
        mov word ptr ds : [ebx+edx*2+0x220], 0
        public_6b56c36 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b56c5b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b56c5b : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6b56c9c
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b56c9c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b56ca8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b56a80)
    }
}

#undef public_6b56ac7
#undef public_6b56aee
#undef public_6b56b1d
#undef public_6b56b44
#undef public_6b56b67
#undef public_6b56b78
#undef public_6b56b9d
#undef public_6b56bd1
#undef public_6b56bf7
#undef public_6b56c36
#undef public_6b56c5b
#undef public_6b56c9c
#undef public_6b56ca8
