#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);
CLANG_FORWARD_PROC_SYMBOL(public_6f69570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f99f50 _public_6f99f50
#define public_6f99f5a _public_6f99f5a
#define public_6f99f9d _public_6f99f9d
#define public_6f99fb7 _public_6f99fb7
#define public_6f99fd4 _public_6f99fd4
#define public_6f99fea _public_6f99fea
#define public_6f99ff1 _public_6f99ff1
#define public_6f99ff3 _public_6f99ff3
#define public_6f9a01f _public_6f9a01f
#define public_6f9a024 _public_6f9a024
#define public_6f9a02c _public_6f9a02c
#define public_6f9a02e _public_6f9a02e
#define public_6f9a03a _public_6f9a03a
#define public_6f9a050 _public_6f9a050
#define public_6f9a060 _public_6f9a060
#define public_6f9a0c2 _public_6f9a0c2
#define public_6f9a0d7 _public_6f9a0d7
#define public_6f9a110 _public_6f9a110
#define public_6f9a11d _public_6f9a11d
#define public_6f9a130 _public_6f9a130
#define public_6f9a13b _public_6f9a13b
#define public_6f9a142 _public_6f9a142
#define public_6f9a14d _public_6f9a14d
#define public_6f9a150 _public_6f9a150
#define public_6f9a161 _public_6f9a161

PROC_DECLARE(0x6f99f10, internal_6f99f10, public_6f99f10);
extern "C" NAKED register_t __cdecl internal_6f99f10()
{
    __asm
    {
        sub esp, 0x414
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x428]
        mov esi, ecx
/*FIXUP push offset public_6fbcf60 @0x6f99f29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf60
        mov ecx, edi
        call ebx
        test al, al
        je public_6f9a161
        mov ecx, dword ptr ds : [esi+0xC]
        lea ebp, ds:[esi+4]
        mov esi, dword ptr ss : [ebp+4]
        mov eax, ecx
        cmp eax, ecx
        je public_6f99f5a
        lea esp, ss:[esp]
        public_6f99f50 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        cmp eax, ecx
        jne public_6f99f50
        public_6f99f5a : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push esi
        mov ecx, ebp
        call public_6ea1490
/*FIXUP push offset public_6fbcf60 @0x6f99f66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf60
        mov ecx, edi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call ebx
        test al, al
        je public_6f99fd4
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f99f9d
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], al
        jmp public_6f99fd4
        public_6f99f9d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x400
        jb public_6f99fb7
        mov eax, 0x3FF
        public_6f99fb7 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], 0
        mov dword ptr ss : [esp+0x20], eax
        public_6f99fd4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        jbe public_6f9a161
        cmp edi, eax
        jae public_6f99ff1
        public_6f99fea : nop
        movsx eax, byte ptr ss : [esp+edi+0x24]
        jmp public_6f99ff3
        public_6f99ff1 : nop
        xor eax, eax
        public_6f99ff3 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp al, 0x54
        sete al
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [ebp+8]
        sub ecx, eax
        cmp ecx, 1
        mov esi, eax
        jae public_6f9a0d7
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6f9a01f
        mov ecx, eax
        sub ecx, edx
        cmp ecx, 1
        ja public_6f9a024
        public_6f9a01f : nop
        mov ecx, 1
        public_6f9a024 : nop
        test edx, edx
        jne public_6f9a02c
        xor eax, eax
        jmp public_6f9a02e
        public_6f9a02c : nop
        sub eax, edx
        public_6f9a02e : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f9a03a
        xor eax, eax
        public_6f9a03a : nop
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x18], eax
        mov edi, eax
        je public_6f9a060
        public_6f9a050 : nop
        push ebx
        push edi
        call public_6ef8310
        add esp, 8
        inc edi
        inc ebx
        cmp ebx, esi
        jne public_6f9a050
        public_6f9a060 : nop
        lea edx, ss:[esp+0x13]
        push edx
        push 1
        push edi
        mov ecx, ebp
        call public_6fa3c80
        mov eax, dword ptr ss : [ebp+8]
        inc edi
        push edi
        push eax
        push esi
        mov ecx, ebp
        call public_6f69570
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[ecx+edx]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f9a0c2
        mov edi, dword ptr ss : [esp+0x14]
        xor edx, edx
        lea edx, ds:[edx+ecx+1]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], ecx
        jmp public_6f9a150
        public_6f9a0c2 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [esp+0x14]
        sub edx, eax
        lea edx, ds:[edx+ecx+1]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], ecx
        jmp public_6f9a150
        public_6f9a0d7 : nop
        mov ecx, eax
        sub ecx, esi
        cmp ecx, 1
        mov ecx, ebp
        jae public_6f9a11d
        lea edx, ds:[esi+1]
        push edx
        push eax
        push esi
        call public_6f69570
        mov eax, dword ptr ss : [ebp+8]
        mov edx, esi
        lea ecx, ss:[esp+0x13]
        push ecx
        sub edx, eax
        inc edx
        push edx
        push eax
        mov ecx, ebp
        call public_6fa3c80
        mov eax, dword ptr ss : [ebp+8]
        cmp esi, eax
        je public_6f9a14d
        lea ebx, ds:[ebx]
        public_6f9a110 : nop
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi], cl
        inc esi
        cmp esi, eax
        jne public_6f9a110
        jmp public_6f9a14d
        public_6f9a11d : nop
        push eax
        push eax
        dec eax
        push eax
        call public_6f69570
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx-1]
        cmp esi, eax
        je public_6f9a13b
        public_6f9a130 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_6f9a130
        public_6f9a13b : nop
        lea eax, ds:[esi+1]
        cmp esi, eax
        je public_6f9a14d
        public_6f9a142 : nop
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi], cl
        inc esi
        cmp esi, eax
        jne public_6f9a142
        public_6f9a14d : nop
        inc dword ptr ss : [ebp+8]
        public_6f9a150 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jb public_6f99fea
        public_6f9a161 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x414
        ret 4
        UNREACHABLE_TRAP(0x6f99f10)
    }
}

#undef public_6f99f50
#undef public_6f99f5a
#undef public_6f99f9d
#undef public_6f99fb7
#undef public_6f99fd4
#undef public_6f99fea
#undef public_6f99ff1
#undef public_6f99ff3
#undef public_6f9a01f
#undef public_6f9a024
#undef public_6f9a02c
#undef public_6f9a02e
#undef public_6f9a03a
#undef public_6f9a050
#undef public_6f9a060
#undef public_6f9a0c2
#undef public_6f9a0d7
#undef public_6f9a110
#undef public_6f9a11d
#undef public_6f9a130
#undef public_6f9a13b
#undef public_6f9a142
#undef public_6f9a14d
#undef public_6f9a150
#undef public_6f9a161
