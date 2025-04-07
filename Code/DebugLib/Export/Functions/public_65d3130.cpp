#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d39a0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3cf0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d50);
CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d315b _public_65d315b
#define public_65d3181 _public_65d3181
#define public_65d3190 _public_65d3190
#define public_65d319c _public_65d319c
#define public_65d31a5 _public_65d31a5
#define public_65d31ad _public_65d31ad
#define public_65d31ce _public_65d31ce
#define public_65d322d _public_65d322d
#define public_65d329b _public_65d329b
#define public_65d32ff _public_65d32ff
#define public_65d332d _public_65d332d
#define public_65d336b _public_65d336b

PROC_DECLARE(0x65d3130, internal_65d3130, public_65d3130);
extern "C" NAKED register_t __cdecl internal_65d3130()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov ebx, dword ptr ss : [esp+0x14]
        not ecx
        dec ecx
        lea ebp, ds:[ebx+0x24]
        mov edi, ecx
        cmp edi, 0xFFFFFFFD
        mov dword ptr ss : [esp+0x14], edi
        jbe public_65d315b
        call public_65d6cc3
        public_65d315b : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_65d3181
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d3181
        cmp cl, 0xFF
        je public_65d3181
        test edi, edi
        jne public_65d31a5
        dec cl
        push edi
        mov byte ptr ds : [eax-1], cl
        mov ecx, ebp
        call public_65d3b40
        jmp public_65d31ce
        public_65d3181 : nop
        test edi, edi
        jne public_65d3190
        push 1
        mov ecx, ebp
        call public_65d3b40
        jmp public_65d31ce
        public_65d3190 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_65d319c
        cmp eax, edi
        jae public_65d31ad
        public_65d319c : nop
        push 1
        mov ecx, ebp
        call public_65d3b40
        public_65d31a5 : nop
        mov ecx, ebp
        push edi
        call public_65d4350
        public_65d31ad : nop
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_65d31ce : nop
        mov edi, offset public_65e31d8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[ebx+0x34]
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d8 @0x65d31e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d8
        mov ecx, esi
        call public_65d3d50
        push 0xFFFFFFFF
        push 0
        push ebp
        mov ecx, esi
        call public_65d39a0
        mov edi, offset public_65e31d4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d4 @0x65d3209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d4
        mov ecx, esi
        call public_65d3a80
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[ebx+4]
        push edx
        call public_65d3cf0
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_65d329b
        public_65d322d : nop
        push 0xFFFFFFFF
        add eax, 0xC
        push 0
        push eax
        mov ecx, esi
        call public_65d39a0
        mov edi, offset public_65e31d0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d0 @0x65d324c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d0
        mov ecx, esi
        call public_65d3a80
        push 0xFFFFFFFF
        push 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, esi
        add eax, 0x1C
        push eax
        call public_65d39a0
        mov edi, offset public_65e31cc
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31cc @0x65d327b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31cc
        mov ecx, esi
        call public_65d3a80
        lea ecx, ss:[esp+0x14]
        call public_65d3d00
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        jne public_65d322d
        public_65d329b : nop
        mov edi, offset public_65e31c8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31c8 @0x65d32ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31c8
        mov ecx, esi
        call public_65d3a80
        mov edi, offset public_65e31c4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebx, 0x44
        repne scasb
        not ecx
        dec ecx
        push 1
        mov esi, ecx
        mov ecx, ebx
        push esi
        mov dword ptr ss : [esp+0x20], esi
        call public_65d3e10
        test al, al
        je public_65d32ff
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, esi
        mov edx, ecx
        mov esi, offset public_65e31c4
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov eax, edx
        and ecx, 3
        push eax
        rep movsb
        mov ecx, ebx
        call public_65d3df0
        public_65d32ff : nop
        push 0xFFFFFFFF
        push 0
        push ebp
        mov ecx, ebx
        call public_65d39a0
        mov edi, offset public_65e31c8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edx, dword ptr ds : [ebx+8]
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        or ecx, 0xFFFFFFFF
        sub ecx, edx
        cmp ecx, esi
        ja public_65d332d
        call public_65d6cc3
        public_65d332d : nop
        test esi, esi
        jbe public_65d336b
        mov ebp, dword ptr ds : [ebx+8]
        push 0
        add ebp, esi
        mov ecx, ebx
        push ebp
        call public_65d3e10
        test al, al
        je public_65d336b
        mov edi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, esi
        add edi, edx
        mov edx, ecx
        mov esi, offset public_65e31c8
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_65d336b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d3130)
    }
}

#undef public_65d315b
#undef public_65d3181
#undef public_65d3190
#undef public_65d319c
#undef public_65d31a5
#undef public_65d31ad
#undef public_65d31ce
#undef public_65d322d
#undef public_65d329b
#undef public_65d32ff
#undef public_65d332d
#undef public_65d336b
