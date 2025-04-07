#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_412cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_JUMP_SYMBOL(public_5b87f8);

#define public_412800 _public_412800
#define public_41283d _public_41283d
#define public_412850 _public_412850
#define public_412856 _public_412856
#define public_412858 _public_412858
#define public_412867 _public_412867
#define public_412878 _public_412878
#define public_41287e _public_41287e
#define public_41288e _public_41288e
#define public_41289c _public_41289c
#define public_4128b0 _public_4128b0
#define public_4128ba _public_4128ba
#define public_4128c6 _public_4128c6
#define public_4128d2 _public_4128d2
#define public_4128e4 _public_4128e4
#define public_4128e8 _public_4128e8
#define public_4128f0 _public_4128f0
#define public_412923 _public_412923
#define public_41292f _public_41292f
#define public_412954 _public_412954
#define public_412964 _public_412964
#define public_412976 _public_412976
#define public_41297c _public_41297c
#define public_41299e _public_41299e
#define public_4129ab _public_4129ab
#define public_4129ae _public_4129ae
#define public_4129c7 _public_4129c7
#define public_4129dd _public_4129dd
#define public_4129f3 _public_4129f3
#define public_4129fb _public_4129fb
#define public_412a44 _public_412a44
#define public_412a54 _public_412a54
#define public_412a70 _public_412a70
#define public_412a7a _public_412a7a
#define public_412abb _public_412abb
#define public_412abd _public_412abd
#define public_412aed _public_412aed
#define public_412ba0 _public_412ba0
#define public_412bb2 _public_412bb2
#define public_412bd3 _public_412bd3
#define public_412bed _public_412bed
#define public_412c05 _public_412c05
#define public_412c0f _public_412c0f
#define public_412c2f _public_412c2f
#define public_412c53 _public_412c53
#define public_412c78 _public_412c78
#define public_412c86 _public_412c86
#define public_412c9a _public_412c9a

PROC_DECLARE(0x4127d0, internal_4127d0, public_4127d0);
extern "C" NAKED register_t __cdecl internal_4127d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b87f8 @0x4127d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b87f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        jne public_412800
        xor al, al
        jmp public_412c9a
        public_412800 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov al, byte ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, esi
        test al, al
        mov eax, dword ptr ds : [public_616668]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], ebx
        jne public_41289c
        lea ecx, ds:[edx-1]
        test edx, ecx
        jne public_41283d
        jmp public_412858
        public_41283d : nop
        mov ecx, 0x40
        cmp ecx, edx
        sbb ecx, ecx
        and ecx, 0x7F
        inc ecx
        cmp ecx, edx
        jae public_412856
        mov edi, edi
        public_412850 : nop
        shl ecx, 1
        cmp ecx, edx
        jb public_412850
        public_412856 : nop
        mov esi, ecx
        public_412858 : nop
        lea edx, ds:[ebx-1]
        test ebx, edx
        mov dword ptr ss : [esp+0x30], esi
        jne public_412867
        mov ecx, ebx
        jmp public_41287e
        public_412867 : nop
        mov ecx, 0x40
        cmp ecx, ebx
        sbb ecx, ecx
        and ecx, 0x7F
        inc ecx
        cmp ecx, ebx
        jae public_41287e
        public_412878 : nop
        shl ecx, 1
        cmp ecx, ebx
        jb public_412878
        public_41287e : nop
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], ecx
        ja public_41288e
        cmp ecx, dword ptr ds : [public_61666c]
        jbe public_41289c
        public_41288e : nop
        mov byte ptr ds : [public_616698], 1
        xor al, al
        jmp public_412c9a
        public_41289c : nop
        mov edi, dword ptr ss : [ebp+0x14]
        test edi, edi
        je public_41292f
        mov ecx, edi
        xor edx, edx
        test ecx, ecx
        je public_4128ba
        nop 
        public_4128b0 : nop
        add edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0x20]
        test ecx, ecx
        jne public_4128b0
        public_4128ba : nop
        cmp edx, esi
        jb public_4128e4
        mov ecx, edi
        xor edx, edx
        test ecx, ecx
        je public_4128d2
        public_4128c6 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0x24]
        add edx, esi
        test ecx, ecx
        jne public_4128c6
        public_4128d2 : nop
        cmp edx, dword ptr ss : [esp+0x34]
        jb public_4128e4
        cmp dword ptr ds : [edi+0xC], ebx
        jne public_41292f
        mov al, 1
        jmp public_412c9a
        public_4128e4 : nop
        test edi, edi
        je public_412923
        public_4128e8 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi+0x24]
        lea ecx, ds:[ecx]
        public_4128f0 : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x7C], eax
        mov esi, dword ptr ds : [esi+0x20]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [public_616648]
        lea eax, ss:[esp+0x7C]
        push eax
        push ecx
        mov ecx, offset public_616640
        call public_4deb70
        test esi, esi
        jne public_4128f0
        test edi, edi
        jne public_4128e8
        public_412923 : nop
        mov dword ptr ss : [ebp+0x14], 0
        mov eax, dword ptr ds : [public_616668]
        public_41292f : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        jne public_4129fb
        mov ecx, dword ptr ss : [esp+0x34]
        xor edx, edx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x7C], ecx
        jle public_4129dd
        public_412954 : nop
        mov ebp, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [public_61666c]
        cmp ebp, ecx
        jb public_412964
        mov ebp, ecx
        public_412964 : nop
        mov esi, dword ptr ss : [esp+0x30]
        xor edi, edi
        test esi, esi
        jle public_4129c7
        mov ebx, dword ptr ss : [esp+0x34]
        sub ebx, dword ptr ss : [esp+0x7C]
        public_412976 : nop
        cmp esi, eax
        jae public_41297c
        mov eax, esi
        public_41297c : nop
        push ebp
        push eax
        mov ecx, offset public_616640
        call public_412cc0
        test edi, edi
        jne public_4129ab
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_41299e
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x24], eax
        jmp public_4129ae
        public_41299e : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ss : [esp+0x24], eax
        jmp public_4129ae
        public_4129ab : nop
        mov dword ptr ds : [edi+0x20], eax
        public_4129ae : nop
        mov ecx, dword ptr ss : [esp+0x30]
        sub ecx, esi
        mov edi, eax
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ebx
        mov eax, dword ptr ds : [public_616668]
        sub esi, eax
        test esi, esi
        jg public_412976
        public_4129c7 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        sub ecx, dword ptr ds : [public_61666c]
        test ecx, ecx
        mov dword ptr ss : [esp+0x7C], ecx
        jg public_412954
        public_4129dd : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x14], eax
        jne public_4129f3
        xor al, al
        jmp public_412c9a
        public_4129f3 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x3C]
        public_4129fb : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x7C], 1
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_616664]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [public_5c6e0c]
        mov dword ptr ss : [esp+0x44], eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x24], ebx
        jle public_412c78
        mov edx, dword ptr ds : [public_61666c]
        mov eax, dword ptr ds : [public_616668]
        public_412a44 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        jb public_412a54
        mov dword ptr ss : [esp+0x10], edx
        public_412a54 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        jle public_412c53
        lea esp, ss:[esp]
        public_412a70 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        jae public_412a7a
        mov eax, ecx
        public_412a7a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ds : [ebx+0x14]
        xor edx, edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [ebp+4]
        neg esi
        neg edi
        cmp eax, edx
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x54], ecx
        je public_412abb
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        jmp public_412abd
        public_412abb : nop
        xor eax, eax
        public_412abd : nop
        mov ecx, dword ptr ss : [ebp+4]
        push 0
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_616664]
        lea eax, ss:[esp+0x54]
        push eax
        push 2
        push edi
        push esi
        push ecx
        call dword ptr ds : [public_61640c]
        test eax, eax
        jne public_412aed
/*FIXUP push offset public_5c8c44 @0x412ade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8c44
        push 0x329
        jmp public_412c0f
        public_412aed : nop
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        je public_412c2f
        mov eax, dword ptr ds : [public_616658]
        mov ecx, dword ptr ds : [public_616664]
        mov edi, dword ptr ds : [public_5c6e0c]
        mov esi, dword ptr ds : [public_61666c]
        push eax
        push ecx
        call edi
        mov edx, dword ptr ds : [public_616660]
        mov eax, dword ptr ds : [public_61665c]
        mov ecx, dword ptr ds : [public_616654]
        push 0
        push edx
        mov edx, dword ptr ds : [public_616664]
        push eax
        push esi
        push 0
        push ecx
        push edx
        call dword ptr ds : [public_5c6e2c]
        mov eax, dword ptr ds : [public_616654]
        mov ecx, dword ptr ds : [public_616664]
        push eax
        push ecx
        call edi
        mov ebp, dword ptr ds : [public_61665c]
        push 0
        call public_5b7010
        mov edx, dword ptr ds : [public_5c6de0]
        add esp, 4
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x58]
        push edx
        mov edx, dword ptr ds : [ebx]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xC0]
        test eax, eax
        jne public_412c05
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_412bed
        mov ecx, eax
        mov dword ptr ss : [esp+0x28], ecx
        lea ebx, ds:[ebx]
        public_412ba0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jbe public_412bd3
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, edx
        mov eax, ebp
        sub esi, ebp
        public_412bb2 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        xor ebx, ebx
        test cx, cx
        setne bl
        add eax, 2
        shl ebx, 0xF
        or ebx, ecx
        dec edi
        mov word ptr ds : [esi+eax-2], bx
        jne public_412bb2
        mov ebx, dword ptr ss : [esp+0x2C]
        public_412bd3 : nop
        mov eax, dword ptr ds : [public_616668]
        mov ecx, dword ptr ss : [esp+0x30]
        lea ebp, ss:[ebp+eax*2]
        mov eax, dword ptr ss : [esp+0x28]
        add edx, ecx
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        jne public_412ba0
        public_412bed : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0xC4]
        jmp public_412c2f
/*FIXUP public_412c05 : nop
        push offset public_5c8c1c @0x412c05*/
  FIXUP public_412c05 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8c1c
        push 0x34C
        public_412c0f : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c8bf0 @0x412c15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bf0
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x412c1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov byte ptr ss : [esp+0x7C], 0
        public_412c2f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_616668]
        mov ebx, dword ptr ds : [ebx+0x20]
        sub ecx, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        jg public_412a70
        mov edx, dword ptr ds : [public_61666c]
        public_412c53 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x24]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        sub ecx, edx
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        jg public_412a44
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        je public_412c86
        public_412c78 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+0xC], ecx
        public_412c86 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        push eax
        call dword ptr ds : [public_5c6e0c]
        mov al, byte ptr ss : [esp+0x7C]
        public_412c9a : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x4127d0)
    }
}

#undef public_412800
#undef public_41283d
#undef public_412850
#undef public_412856
#undef public_412858
#undef public_412867
#undef public_412878
#undef public_41287e
#undef public_41288e
#undef public_41289c
#undef public_4128b0
#undef public_4128ba
#undef public_4128c6
#undef public_4128d2
#undef public_4128e4
#undef public_4128e8
#undef public_4128f0
#undef public_412923
#undef public_41292f
#undef public_412954
#undef public_412964
#undef public_412976
#undef public_41297c
#undef public_41299e
#undef public_4129ab
#undef public_4129ae
#undef public_4129c7
#undef public_4129dd
#undef public_4129f3
#undef public_4129fb
#undef public_412a44
#undef public_412a54
#undef public_412a70
#undef public_412a7a
#undef public_412abb
#undef public_412abd
#undef public_412aed
#undef public_412ba0
#undef public_412bb2
#undef public_412bd3
#undef public_412bed
#undef public_412c05
#undef public_412c0f
#undef public_412c2f
#undef public_412c53
#undef public_412c78
#undef public_412c86
#undef public_412c9a
