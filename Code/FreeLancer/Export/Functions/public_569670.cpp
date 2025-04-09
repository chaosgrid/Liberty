#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_488a80);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_568880);
CLANG_FORWARD_PROC_SYMBOL(public_568d10);
CLANG_FORWARD_PROC_SYMBOL(public_569170);
CLANG_FORWARD_PROC_SYMBOL(public_56a150);
CLANG_FORWARD_PROC_SYMBOL(public_56a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_56a230);
CLANG_FORWARD_PROC_SYMBOL(public_56ad40);
CLANG_FORWARD_PROC_SYMBOL(public_575950);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d540);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aa8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5aace0);
CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5697b7 _public_5697b7
#define public_5698b1 _public_5698b1
#define public_5699ab _public_5699ab
#define public_569ab7 _public_569ab7
#define public_569aff _public_569aff
#define public_569b0a _public_569b0a
#define public_569b1b _public_569b1b
#define public_569bc8 _public_569bc8
#define public_569bd2 _public_569bd2
#define public_569be0 _public_569be0
#define public_569be8 _public_569be8
#define public_569c0d _public_569c0d
#define public_569c27 _public_569c27
#define public_569c2a _public_569c2a
#define public_569c3b _public_569c3b
#define public_569c4b _public_569c4b
#define public_569c54 _public_569c54
#define public_569c98 _public_569c98
#define public_569c9b _public_569c9b
#define public_569ca7 _public_569ca7
#define public_569cf5 _public_569cf5
#define public_569d1f _public_569d1f
#define public_569d5b _public_569d5b
#define public_569d7f _public_569d7f
#define public_569daa _public_569daa
#define public_569e18 _public_569e18
#define public_569e5d _public_569e5d
#define public_569e67 _public_569e67
#define public_569e75 _public_569e75
#define public_569e86 _public_569e86
#define public_569ed3 _public_569ed3
#define public_569ed9 _public_569ed9
#define public_569ee1 _public_569ee1
#define public_569f9f _public_569f9f
#define public_569fa2 _public_569fa2
#define public_569fc2 _public_569fc2
#define public_569fec _public_569fec
#define public_56a01e _public_56a01e
#define public_56a038 _public_56a038
#define public_56a049 _public_56a049
#define public_56a056 _public_56a056
#define public_56a08f _public_56a08f
#define public_56a092 _public_56a092
#define public_56a09e _public_56a09e
#define public_56a0a5 _public_56a0a5
#define public_56a0d1 _public_56a0d1
#define public_56a0e2 _public_56a0e2
#define public_56a106 _public_56a106
#define public_56a133 _public_56a133

PROC_DECLARE(0x569670, internal_569670, public_569670);
extern "C" NAKED register_t __cdecl internal_569670()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x208
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x3004
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne public_569b1b
        xor esi, esi
        push esi
        call public_5645c0
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 4
        cmp eax, 0x3001
        jg public_5699ab
        je public_5698b1
        sub eax, 0x3E9
        je public_5697b7
        dec eax
        jne public_56a133
        mov eax, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [ebx+0x5F0], 1
        mov dword ptr ds : [ebx+0x5E8], esi
        mov dword ptr ds : [ebx+0x5EC], esi
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [edx+0x498], 0
        mov eax, dword ptr ds : [ebx+0x2CC]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2D0]
        mov byte ptr ds : [ecx+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2D0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [ebx+0x2E8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2E0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2B8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2BC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        mov ecx, ebx
        call public_56a150
        mov dword ptr ds : [ebx+0x5F4], 0xFFFFFFFE
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5697b7 : nop
        mov edx, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [ebx+0x5F0], 1
        mov dword ptr ds : [ebx+0x5E8], esi
        mov dword ptr ds : [ebx+0x5EC], esi
        mov byte ptr ds : [edx+0x498], 0
        mov eax, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [ebx+0x2CC]
        mov byte ptr ds : [edx+0x498], 0
        mov eax, dword ptr ds : [ebx+0x2D0]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2D0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [ebx+0x2E8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2E0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2B8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2BC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        mov ecx, ebx
        call public_56a150
        mov dword ptr ds : [ebx+0x5F4], 0xFFFFFFFF
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5698b1 : nop
        mov ecx, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [ebx+0x5F0], 1
        mov dword ptr ds : [ebx+0x5E8], esi
        mov dword ptr ds : [ebx+0x5EC], esi
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [edx+0x498], 0
        mov eax, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2CC]
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [ebx+0x2D0]
        mov byte ptr ds : [edx+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2D0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [ebx+0x2E8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2E0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2B8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2BC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        mov ecx, ebx
        call public_56a150
        mov dword ptr ds : [ebx+0x5F4], 2
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5699ab : nop
        sub eax, 0x3002
        je public_569ab7
        dec eax
        jne public_56a133
        mov eax, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [ebx+0x5F0], 1
        mov dword ptr ds : [ebx+0x5E8], esi
        mov dword ptr ds : [ebx+0x5EC], esi
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [edx+0x498], 0
        mov eax, dword ptr ds : [ebx+0x2CC]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2D0]
        mov byte ptr ds : [ecx+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2D0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [ebx+0x2E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [ebx+0x2E8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2E0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2B8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [ebx+0x2BC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        mov ecx, ebx
        call public_56a150
        mov dword ptr ds : [ebx+0x5F4], 1
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569ab7 : nop
        mov ecx, dword ptr ds : [ebx+0x2B8]
        lea edx, ss:[ebp+0xC]
        push edx
        call public_58d540
        test al, al
        je public_569b0a
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push eax
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, esi
        je public_569b0a
        add eax, 8
        push eax
        mov ecx, offset public_67e7b8
        call public_5aace0
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        jne public_569aff
        mov eax, dword ptr ds : [public_5c700c]
        public_569aff : nop
        push esi
        push eax
        push ebx
        call public_488a80
        add esp, 0xC
        public_569b0a : nop
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569b1b : nop
        cmp eax, 0xF001
        jg public_56a0e2
        je public_569e86
        sub eax, 0x3006
        je public_569d7f
        sub eax, 7
        jne public_56a133
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [ebx+0x2B8]
        jne public_56a133
        lea eax, ds:[ebx+0x399]
        mov esi, eax
        mov ecx, 0x80
        lea edi, ss:[ebp-0x208]
        rep movsd
        mov esi, dword ptr ds : [public_5c63cc]
/*FIXUP push offset public_67bd40 @0x569b6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        mov ecx, eax
        call esi
        mov ecx, dword ptr ds : [ebx+0x2B8]
        lea edx, ss:[ebp-8]
        push edx
        call public_58d540
        test al, al
        je public_569ca7
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push eax
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_569ca7
        add eax, 8
        push eax
        lea ecx, ds:[ebx+0x399]
        call esi
        mov eax, dword ptr ds : [public_67e970]
        xor edx, edx
        xor esi, esi
        xor ecx, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0xC], edx
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp-4], ecx
        je public_569bd2
        public_569bc8 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_569bc8
        mov dword ptr ss : [ebp-4], ecx
        public_569bd2 : nop
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jle public_569ca7
        nop 
        public_569be0 : nop
        test edx, edx
        je public_569be8
        test esi, esi
        jne public_569c3b
        public_569be8 : nop
        push eax
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov esi, eax
        lea eax, ds:[ebx+0x399]
        push eax
        push esi
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        je public_569c0d
        mov dword ptr ss : [ebp+0xC], esi
        public_569c0d : nop
        lea ecx, ss:[ebp-0x208]
        push ecx
        push esi
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        je public_569c27
        mov dword ptr ss : [ebp+8], esi
        jmp public_569c2a
        public_569c27 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_569c2a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jl public_569be0
        public_569c3b : nop
        test edx, edx
        je public_569c4b
        push edx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov ecx, ebx
        call public_569170
        public_569c4b : nop
        test esi, esi
        je public_569ca7
        mov esi, 1
        public_569c54 : nop
        mov ecx, dword ptr ds : [ebx+0x2B8]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_569ca7
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_569ca7
        push esi
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_569c98
        lea ecx, ss:[ebp-0x208]
        push ecx
        add eax, 8
        push eax
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        jne public_569c9b
        public_569c98 : nop
        inc esi
        jmp public_569c54
        public_569c9b : nop
        mov edx, dword ptr ss : [ebp+8]
        push edx
        push esi
        mov ecx, ebx
        call public_569170
        public_569ca7 : nop
        lea eax, ds:[ebx+0x399]
/*FIXUP push offset public_67bd40 @0x569cad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        push eax
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        mov eax, dword ptr ds : [ebx+0x2C0]
        mov dl, byte ptr ds : [eax+0x6C]
        je public_569cf5
        and dl, 0xFE
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ebx+0x2C8]
        and byte ptr ds : [eax+0x6C], 0xFE
        mov eax, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [eax+0x498], 0
        mov ecx, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [ecx+0x498], 0
        jmp public_569d1f
        public_569cf5 : nop
        or dl, 1
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ebx+0x2C8]
        or byte ptr ds : [eax+0x6C], 1
        mov edx, dword ptr ds : [ebx+0x2C0]
        mov byte ptr ds : [edx+0x498], 1
        mov eax, dword ptr ds : [ebx+0x2C8]
        mov byte ptr ds : [eax+0x498], 1
        public_569d1f : nop
        mov ecx, offset public_67e96c
        call public_575950
        cmp eax, 5
        mov eax, dword ptr ds : [ebx+0x2C4]
        mov cl, byte ptr ds : [eax+0x6C]
        jl public_569d5b
        and cl, 0xFE
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [ecx+0x498], 0
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569d5b : nop
        or cl, 1
        mov byte ptr ds : [eax+0x6C], cl
        mov edx, dword ptr ds : [ebx+0x2C4]
        mov byte ptr ds : [edx+0x498], 1
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569d7f : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_569daa
        mov eax, dword ptr ds : [ebx]
        push 0
        push 0xF003
        push 0x3004
        mov ecx, ebx
        call dword ptr ds : [eax+0x5C]
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569daa : nop
        cmp eax, 1
        jne public_569e75
        lea ecx, ss:[ebp+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2B8]
        call public_58d540
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push edx
        call public_58d0b0
        mov esi, dword ptr ds : [eax+8]
        add esi, 8
        mov ecx, 0x80
        lea edi, ss:[ebp-0x208]
        lea eax, ss:[ebp-0x208]
        rep movsd
        push eax
        mov ecx, offset public_67e7b8
        call public_5aa8f0
        cmp eax, 1
        jne public_569e18
        mov ecx, dword ptr ds : [ebx+0x2B8]
        call public_58d4a0
/*FIXUP push offset public_67bd40 @0x569e05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        lea ecx, ds:[ebx+0x399]
        call dword ptr ds : [public_5c63cc]
        jmp public_569e67
        public_569e18 : nop
        cmp eax, 2
        je public_569e5d
        push 0
        push 0
        push 0x73B
        call public_473cb0
        add esp, 0xC
        mov ecx, offset public_67e7b8
        call public_5aade0
        mov ecx, offset public_67e7b8
        call public_5aa680
        cmp eax, 1
        je public_569e67
        cmp eax, 2
        je public_569e5d
        push 0
        push 0
        push 0x73C
        call public_473cb0
        add esp, 0xC
        public_569e5d : nop
        mov dword ptr ds : [ebx+0x2B4], 5
        public_569e67 : nop
        mov ecx, ebx
        call public_568d10
        mov ecx, ebx
        call public_56a230
        public_569e75 : nop
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_569e86 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [ebx+0x2B8]
        jne public_56a133
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, eax
        and ecx, 0xFFFF
        test eax, 0xFFFF0000
        jne public_56a133
        cmp ecx, 5
        jae public_56a133
        mov eax, dword ptr ds : [ebx+0x390]
        cmp ecx, eax
        jne public_569ed3
        mov cl, byte ptr ds : [eax+ebx+0x394]
        test cl, cl
        sete dl
        mov byte ptr ds : [eax+ebx+0x394], dl
        jmp public_569ed9
        public_569ed3 : nop
        mov dword ptr ds : [ebx+0x390], ecx
        public_569ed9 : nop
        xor esi, esi
        lea edi, ds:[ebx+0x2F0]
        public_569ee1 : nop
        push 0
        push 0
        push edi
        push esi
        push 0
        mov ecx, ebx
        call public_568880
        inc esi
        add edi, 0xC
        cmp esi, 5
        jb public_569ee1
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push 0
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        mov ecx, dword ptr ds : [ebx+0x2B8]
        call public_58d4a0
        mov ecx, offset public_67e96c
        mov esi, 1
        call public_575950
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [ebx+0x2B8]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        fild dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2BC]
        fstp dword ptr ss : [esp]
        mov edi, eax
        push 0
        mov dword ptr ss : [ebp-4], edi
        call public_595d60
        dec edi
        mov dword ptr ss : [ebp+8], edi
        fild dword ptr ss : [ebp+8]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2BC]
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [ebx+0x2BC]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [ebx+0x2BC]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [ebx+0x59C], eax
        cmp dword ptr ss : [ebp+0xC], edi
        mov eax, dword ptr ds : [ebx+0x2BC]
        mov cl, byte ptr ds : [eax+0x6C]
        jle public_569f9f
        or cl, 3
        jmp public_569fa2
        public_569f9f : nop
        and cl, 0xFC
        public_569fa2 : nop
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 2
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ss : [ebp+0xC]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [ebp+8], esp
        jle public_569fec
        public_569fc2 : nop
        push edi
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+edi*4], eax
        lea ecx, ds:[ebx+0x399]
        push ecx
        push eax
        call dword ptr ds : [public_5c6bd4]
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 8
        inc edi
        cmp edi, eax
        jl public_569fc2
        public_569fec : nop
        mov edi, dword ptr ss : [ebp+0xC]
        test edi, edi
        je public_56a038
        mov eax, dword ptr ds : [ebx+0x390]
        mov cl, byte ptr ds : [eax+ebx+0x394]
        test cl, cl
        je public_56a01e
        mov edx, dword ptr ds : [eax*4+public_614b98]
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push 4
        push edi
        push eax
        call dword ptr ds : [public_5c70f4]
        add esp, 0x10
        jmp public_56a049
        public_56a01e : nop
        mov ecx, dword ptr ds : [eax*4+public_614b84]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push 4
        push edi
        push edx
        call dword ptr ds : [public_5c70f4]
        add esp, 0x10
        jmp public_56a049
/*FIXUP public_56a038 : nop
        push offset public_67bd40 @0x56a038*/
  FIXUP public_56a038 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        lea ecx, ds:[ebx+0x399]
        call dword ptr ds : [public_5c63cc]
        public_56a049 : nop
        mov eax, dword ptr ds : [ebx+0x59C]
        cmp eax, edi
        mov dword ptr ss : [ebp+0x10], eax
        jge public_56a09e
        public_56a056 : nop
        cmp esi, dword ptr ss : [ebp-4]
        jae public_56a0d1
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+eax*4]
        test edi, edi
        je public_56a092
        push edi
        push esi
        mov ecx, ebx
        call public_569170
        lea edx, ds:[ebx+0x399]
        push edx
        push edi
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        je public_56a08f
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push esi
        call public_58d4b0
        public_56a08f : nop
        mov eax, dword ptr ss : [ebp+0x10]
        public_56a092 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        inc esi
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jl public_56a056
        public_56a09e : nop
        mov edi, dword ptr ss : [ebp-4]
        cmp esi, edi
        jae public_56a0d1
        public_56a0a5 : nop
        push esi
        mov ecx, ebx
        call public_56a1b0
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push esi
        call public_58d0b0
        mov byte ptr ds : [eax+1], 0
        mov ecx, dword ptr ds : [ebx+0x2B8]
        push esi
        call public_58d0b0
        inc esi
        cmp esi, edi
        mov byte ptr ds : [eax], 0
        jb public_56a0a5
        public_56a0d1 : nop
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_56a0e2 : nop
        sub eax, 0xF002
        je public_56a106
        sub eax, 3
        jne public_56a133
        mov ecx, ebx
        call public_568d10
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_56a106 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [ebx+0x2B8]
        jne public_56a133
        mov ecx, ebx
        call public_56ad40
        mov dword ptr ds : [ebx+0x5F4], 1
        mov al, 1
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_56a133 : nop
        xor al, al
        lea esp, ss:[ebp-0x214]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x569670)
    }
}

#undef public_5697b7
#undef public_5698b1
#undef public_5699ab
#undef public_569ab7
#undef public_569aff
#undef public_569b0a
#undef public_569b1b
#undef public_569bc8
#undef public_569bd2
#undef public_569be0
#undef public_569be8
#undef public_569c0d
#undef public_569c27
#undef public_569c2a
#undef public_569c3b
#undef public_569c4b
#undef public_569c54
#undef public_569c98
#undef public_569c9b
#undef public_569ca7
#undef public_569cf5
#undef public_569d1f
#undef public_569d5b
#undef public_569d7f
#undef public_569daa
#undef public_569e18
#undef public_569e5d
#undef public_569e67
#undef public_569e75
#undef public_569e86
#undef public_569ed3
#undef public_569ed9
#undef public_569ee1
#undef public_569f9f
#undef public_569fa2
#undef public_569fc2
#undef public_569fec
#undef public_56a01e
#undef public_56a038
#undef public_56a049
#undef public_56a056
#undef public_56a08f
#undef public_56a092
#undef public_56a09e
#undef public_56a0a5
#undef public_56a0d1
#undef public_56a0e2
#undef public_56a106
#undef public_56a133
