#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dafb5a _public_6dafb5a
#define public_6dafb71 _public_6dafb71
#define public_6dafb84 _public_6dafb84
#define public_6dafbc8 _public_6dafbc8
#define public_6dafbdb _public_6dafbdb
#define public_6dafbfb _public_6dafbfb
#define public_6dafc0e _public_6dafc0e
#define public_6dafc43 _public_6dafc43
#define public_6dafc56 _public_6dafc56
#define public_6dafc79 _public_6dafc79
#define public_6dafc9a _public_6dafc9a
#define public_6dafcad _public_6dafcad
#define public_6dafcd3 _public_6dafcd3
#define public_6dafcf6 _public_6dafcf6
#define public_6dafd2a _public_6dafd2a

PROC_DECLARE(0x6dafb10, internal_6dafb10, public_6dafb10);
extern "C" NAKED register_t __cdecl internal_6dafb10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebp, ds:[ebx+0x10]
        push esi
        push edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6dafb5a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafb5a : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6dafb71
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6dafb71 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6dafb84
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafb84 : nop
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [ebx+0x420]
        mov esi, dword ptr ds : [public_6db31ec]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [edi], eax
        lea eax, ds:[ebx+0x20]
        push eax
        call esi
        mov byte ptr ss : [esp+0x1C], al
        lea eax, ds:[ebx+0x220]
        push eax
        call esi
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 8
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [ebp], esi
        jbe public_6dafbc8
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6dafbc8 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6dafbdb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafbdb : nop
        mov ecx, dword ptr ds : [edi]
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ss : [ebp], ecx
        jbe public_6dafbfb
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6dafbfb : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6dafc0e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafc0e : nop
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ds : [ecx], al
        inc ecx
        test dl, dl
        mov dword ptr ds : [edi], ecx
        je public_6dafc79
        lea esi, ds:[ebx+0x20]
        push esi
        call dword ptr ds : [public_6db320c]
        movzx eax, byte ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        shl eax, 1
        add ecx, eax
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp], ecx
        jbe public_6dafc43
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6dafc43 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6dafc56
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafc56 : nop
        mov edi, dword ptr ds : [edi]
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
        mov al, byte ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x18], ecx
        public_6dafc79 : nop
        test al, al
        je public_6dafcd3
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        movzx eax, al
        shl eax, 1
        add esi, eax
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6dafc9a
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6dafc9a : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6dafcad
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafcad : nop
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        lea esi, ds:[ebx+0x220]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        public_6dafcd3 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        push ebp
        push edx
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6dafcf6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dafcf6 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ss : [ebp]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jbe public_6dafd2a
        mov dword ptr ds : [ecx+0x10], ebp
        public_6dafd2a : nop
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
        UNREACHABLE_TRAP(0x6dafb10)
    }
}

#undef public_6dafb5a
#undef public_6dafb71
#undef public_6dafb84
#undef public_6dafbc8
#undef public_6dafbdb
#undef public_6dafbfb
#undef public_6dafc0e
#undef public_6dafc43
#undef public_6dafc56
#undef public_6dafc79
#undef public_6dafc9a
#undef public_6dafcad
#undef public_6dafcd3
#undef public_6dafcf6
#undef public_6dafd2a
