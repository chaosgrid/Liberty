#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418890);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4188c0 _public_4188c0
#define public_4188c2 _public_4188c2
#define public_4188ca _public_4188ca
#define public_4188cc _public_4188cc
#define public_4188d8 _public_4188d8
#define public_4188f2 _public_4188f2
#define public_4188fe _public_4188fe
#define public_418904 _public_418904
#define public_418910 _public_418910
#define public_418919 _public_418919
#define public_418921 _public_418921
#define public_418933 _public_418933
#define public_41893f _public_41893f
#define public_418945 _public_418945
#define public_41897c _public_41897c
#define public_418995 _public_418995
#define public_4189b0 _public_4189b0
#define public_4189bc _public_4189bc
#define public_4189c2 _public_4189c2
#define public_4189d1 _public_4189d1
#define public_4189dd _public_4189dd
#define public_4189e1 _public_4189e1
#define public_4189f0 _public_4189f0
#define public_4189fb _public_4189fb
#define public_418a10 _public_418a10
#define public_418a1c _public_418a1c
#define public_418a22 _public_418a22
#define public_418a30 _public_418a30
#define public_418a3f _public_418a3f
#define public_418a50 _public_418a50
#define public_418a59 _public_418a59
#define public_418a5d _public_418a5d
#define public_418a60 _public_418a60

PROC_DECLARE(0x418890, internal_418890, public_418890);
extern "C" NAKED register_t __cdecl internal_418890()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, eax
        cmp ecx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jae public_418995
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_4188c0
        mov ecx, eax
        sub ecx, edx
        cmp ebx, ecx
        jb public_4188c2
        public_4188c0 : nop
        mov ecx, ebx
        public_4188c2 : nop
        test edx, edx
        jne public_4188ca
        xor eax, eax
        jmp public_4188cc
        public_4188ca : nop
        sub eax, edx
        public_4188cc : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4188d8
        xor eax, eax
        public_4188d8 : nop
        push eax
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp eax, edi
        je public_418904
        public_4188f2 : nop
        test ecx, ecx
        je public_4188fe
        mov dl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_4188fe : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_4188f2
        public_418904 : nop
        test ebx, ebx
        mov eax, ecx
        jbe public_418921
        mov ebp, dword ptr ss : [esp+0x24]
        mov esi, ebx
        public_418910 : nop
        test eax, eax
        je public_418919
        mov dl, byte ptr ss : [ebp]
        mov byte ptr ds : [eax], dl
        public_418919 : nop
        inc eax
        dec esi
        jne public_418910
        mov ebp, dword ptr ss : [esp+0x10]
        public_418921 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp edi, esi
        lea edx, ds:[ecx+ebx]
        je public_418945
        mov eax, edx
        sub eax, ecx
        sub eax, ebx
        add eax, edi
        public_418933 : nop
        test edx, edx
        je public_41893f
        mov cl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx], cl
        public_41893f : nop
        inc edx
        inc eax
        cmp eax, esi
        jne public_418933
        public_418945 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_41897c
        xor eax, eax
        pop edi
        mov eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_41897c : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        pop edi
        add eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_418995 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, esi
        cmp edx, ebx
        jae public_4189fb
        cmp esi, eax
        lea edi, ds:[esi+ebx]
        je public_4189c2
        mov ecx, edi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_4189b0 : nop
        test edi, edi
        je public_4189bc
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_4189bc : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_4189b0
        public_4189c2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, ecx
        add eax, ebx
        je public_4189e1
        public_4189d1 : nop
        test ecx, ecx
        je public_4189dd
        mov dl, byte ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_4189dd : nop
        inc ecx
        dec eax
        jne public_4189d1
        public_4189e1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp esi, ecx
        mov eax, esi
        je public_418a5d
        lea ebx, ds:[ebx]
        public_4189f0 : nop
        mov dl, byte ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_4189f0
        jmp public_418a59
        public_4189fb : nop
        test ebx, ebx
        jbe public_418a60
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, eax
        mov edi, eax
        je public_418a22
        lea esp, ss:[esp]
        public_418a10 : nop
        test edi, edi
        je public_418a1c
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_418a1c : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_418a10
        public_418a22 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, ebx
        cmp esi, eax
        je public_418a3f
        lea ecx, ds:[ecx]
        public_418a30 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_418a30
        mov ebp, dword ptr ss : [esp+0x10]
        public_418a3f : nop
        lea ecx, ds:[esi+ebx]
        cmp esi, ecx
        mov eax, esi
        je public_418a5d
        mov esi, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_418a50 : nop
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_418a50
        public_418a59 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_418a5d : nop
        add dword ptr ss : [ebp+8], ebx
        public_418a60 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x418890)
    }
}

#undef public_4188c0
#undef public_4188c2
#undef public_4188ca
#undef public_4188cc
#undef public_4188d8
#undef public_4188f2
#undef public_4188fe
#undef public_418904
#undef public_418910
#undef public_418919
#undef public_418921
#undef public_418933
#undef public_41893f
#undef public_418945
#undef public_41897c
#undef public_418995
#undef public_4189b0
#undef public_4189bc
#undef public_4189c2
#undef public_4189d1
#undef public_4189dd
#undef public_4189e1
#undef public_4189f0
#undef public_4189fb
#undef public_418a10
#undef public_418a1c
#undef public_418a22
#undef public_418a30
#undef public_418a3f
#undef public_418a50
#undef public_418a59
#undef public_418a5d
#undef public_418a60
