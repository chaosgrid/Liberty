#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dafd87 _public_6dafd87
#define public_6dafdad _public_6dafdad
#define public_6dafdd8 _public_6dafdd8
#define public_6dafdfb _public_6dafdfb
#define public_6dafe32 _public_6dafe32
#define public_6dafe6c _public_6dafe6c
#define public_6dafe8f _public_6dafe8f
#define public_6dafed3 _public_6dafed3
#define public_6dafef5 _public_6dafef5
#define public_6daff36 _public_6daff36
#define public_6daff42 _public_6daff42

PROC_DECLARE(0x6dafd40, internal_6dafd40, public_6dafd40);
extern "C" NAKED register_t __cdecl internal_6dafd40()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6dafd87
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6dafd87 : nop
        xor eax, eax
        lea edi, ds:[ebx+0x20]
        mov ecx, 0x100
        rep stosd
        stosw 
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6dafdad
        mov dword ptr ss : [ebp+0xC], edi
        public_6dafdad : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6daff42
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ebx+0x420], dl
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6dafdd8
        mov dword ptr ss : [ebp+0xC], edi
        public_6dafdd8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6daff42
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp], eax
        jbe public_6dafdfb
        mov dword ptr ss : [ebp+0xC], edi
        public_6dafdfb : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6daff42
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov byte ptr ss : [esp+0x18], dl
        mov dword ptr ds : [esi], eax
        je public_6dafe6c
        mov edx, dword ptr ss : [ebp+4]
        xor eax, eax
        mov al, cl
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ds:[eax+eax]
        mov eax, dword ptr ss : [ebp]
        add eax, ecx
        cmp eax, edx
        mov dword ptr ss : [ebp], eax
        jbe public_6dafe32
        mov dword ptr ss : [ebp+0xC], edi
        public_6dafe32 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6daff42
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        lea edi, ds:[ebx+0x20]
        rep movsd
        mov ecx, edx
        mov dl, byte ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+ecx*2]
        mov dword ptr ds : [ebx+0x18], eax
        mov word ptr ds : [ebx+ecx*2+0x20], 0
        mov edi, 0x17
        public_6dafe6c : nop
        test dl, dl
        je public_6dafed3
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        mov al, dl
        lea edx, ds:[eax+eax]
        add esi, edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6dafe8f
        mov dword ptr ss : [ebp+0xC], edi
        public_6dafe8f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6daff42
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
        mov edi, 0x17
        public_6dafed3 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6dafef5
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6dafef5 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6daff36
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6daff36 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daff42 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6dafd40)
    }
}

#undef public_6dafd87
#undef public_6dafdad
#undef public_6dafdd8
#undef public_6dafdfb
#undef public_6dafe32
#undef public_6dafe6c
#undef public_6dafe8f
#undef public_6dafed3
#undef public_6dafef5
#undef public_6daff36
#undef public_6daff42
