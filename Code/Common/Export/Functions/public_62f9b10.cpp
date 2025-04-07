#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6282c70);
CLANG_FORWARD_PROC_SYMBOL(public_62f9700);
CLANG_FORWARD_PROC_SYMBOL(public_62f9930);
CLANG_FORWARD_PROC_SYMBOL(public_62f9b10);
CLANG_FORWARD_PROC_SYMBOL(public_62fd310);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395acb);

#define public_62f9b4a _public_62f9b4a
#define public_62f9b71 _public_62f9b71
#define public_62f9b9b _public_62f9b9b
#define public_62f9bc0 _public_62f9bc0
#define public_62f9bd9 _public_62f9bd9
#define public_62f9bf4 _public_62f9bf4
#define public_62f9bff _public_62f9bff
#define public_62f9c1e _public_62f9c1e
#define public_62f9c35 _public_62f9c35
#define public_62f9c5b _public_62f9c5b
#define public_62f9c6c _public_62f9c6c
#define public_62f9c8b _public_62f9c8b
#define public_62f9caa _public_62f9caa
#define public_62f9cc9 _public_62f9cc9
#define public_62f9ce8 _public_62f9ce8
#define public_62f9d3d _public_62f9d3d
#define public_62f9d63 _public_62f9d63
#define public_62f9d89 _public_62f9d89
#define public_62f9dc3 _public_62f9dc3
#define public_62f9e3e _public_62f9e3e
#define public_62f9e62 _public_62f9e62
#define public_62f9e7b _public_62f9e7b
#define public_62f9e88 _public_62f9e88
#define public_62f9e97 _public_62f9e97
#define public_62f9ea6 _public_62f9ea6
#define public_62f9eb2 _public_62f9eb2
#define public_62f9ecb _public_62f9ecb
#define public_62f9ed0 _public_62f9ed0
#define public_62f9f00 _public_62f9f00
#define public_62f9f15 _public_62f9f15
#define public_62f9f20 _public_62f9f20
#define public_62f9f39 _public_62f9f39
#define public_62f9f67 _public_62f9f67
#define public_62f9f8e _public_62f9f8e
#define public_62f9fa0 _public_62f9fa0
#define public_62f9fba _public_62f9fba

PROC_DECLARE(0x62f9b10, internal_62f9b10, public_62f9b10);
extern "C" NAKED register_t __cdecl internal_62f9b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395acb @0x62f9b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395acb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push 0x6C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_62f9b4a
        mov ecx, eax
        call public_62f9930
        mov ebx, eax
        public_62f9b4a : nop
        mov ax, word ptr ss : [esp+0x38]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov word ptr ds : [ebx+4], ax
        call public_6310170
        test al, al
        je public_62f9ea6
/*FIXUP public_62f9b71 : nop
        push offset public_63a2040 @0x62f9b71*/
  FIXUP public_62f9b71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2040
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9b9b
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [ebx+8], eax
        jmp public_62f9e97
/*FIXUP public_62f9b9b : nop
        push offset public_63a13f4 @0x62f9b9b*/
  FIXUP public_62f9b9b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13f4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9bff
        call public_6310b70
        mov dword ptr ss : [esp+0x44], eax
        mov edi, offset public_63ec968
        xor ebp, ebp
        nop 
        lea esp, ss:[esp]
        public_62f9bc0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62f9bd9
        mov ecx, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f9bf4
        public_62f9bd9 : nop
        add ebp, 8
        add edi, 8
        cmp ebp, 0x98
        jb public_62f9bc0
        mov edi, 1
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_62f9e97
        public_62f9bf4 : nop
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_62f9e97
/*FIXUP public_62f9bff : nop
        push offset public_63a13c4 @0x62f9bff*/
  FIXUP public_62f9bff : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13c4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9c1e
        push 0
        call public_63107c0
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_62f9e97
/*FIXUP public_62f9c1e : nop
        push offset public_63a2034 @0x62f9c1e*/
  FIXUP public_62f9c1e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2034
        call public_6310410
        test al, al
        je public_62f9c35
        mov byte ptr ds : [ebx+0x14], 1
        jmp public_62f9e97
/*FIXUP public_62f9c35 : nop
        push offset public_63a2024 @0x62f9c35*/
  FIXUP public_62f9c35 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2024
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9c6c
        push 0
        call public_6310560
        test al, al
        je public_62f9c5b
        mov byte ptr ds : [ebx+0x15], 1
        jmp public_62f9e97
        public_62f9c5b : nop
        push 0
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [ebx+0x15], al
        jmp public_62f9e97
/*FIXUP public_62f9c6c : nop
        push offset public_63a2010 @0x62f9c6c*/
  FIXUP public_62f9c6c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2010
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9c8b
        push 0
        call public_63105b0
        mov byte ptr ds : [ebx+0x16], al
        jmp public_62f9e97
/*FIXUP public_62f9c8b : nop
        push offset public_63a19f8 @0x62f9c8b*/
  FIXUP public_62f9c8b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19f8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9caa
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x18]
        jmp public_62f9e97
/*FIXUP public_62f9caa : nop
        push offset public_63a1a08 @0x62f9caa*/
  FIXUP public_62f9caa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a08
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9cc9
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x1C]
        jmp public_62f9e97
/*FIXUP public_62f9cc9 : nop
        push offset public_63a13bc @0x62f9cc9*/
  FIXUP public_62f9cc9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13bc
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9ce8
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x20]
        jmp public_62f9e97
/*FIXUP public_62f9ce8 : nop
        push offset public_63a13a8 @0x62f9ce8*/
  FIXUP public_62f9ce8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13a8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9d3d
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+0x14]
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x18]
        push 2
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x28]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov byte ptr ds : [ebx+0x24], 1
        jmp public_62f9e97
/*FIXUP public_62f9d3d : nop
        push offset public_63a1a24 @0x62f9d3d*/
  FIXUP public_62f9d3d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a24
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9d63
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+0x34], eax
        jmp public_62f9e97
/*FIXUP public_62f9d63 : nop
        push offset public_63a1a18 @0x62f9d63*/
  FIXUP public_62f9d63 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a18
        call public_6310410
        test al, al
        je public_62f9d89
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+0x38], eax
        jmp public_62f9e97
        public_62f9d89 : nop
        lea ecx, ds:[ebx+0x4C]
        push ecx
        lea edx, ds:[ebx+0x40]
        push edx
        push esi
        call public_62f9700
        add esp, 0xC
        test al, al
        jne public_62f9e97
/*FIXUP push offset public_63a13cc @0x62f9da2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13cc
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f9dc3
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x3C]
        jmp public_62f9e97
/*FIXUP public_62f9dc3 : nop
        push offset public_63a1578 @0x62f9dc3*/
  FIXUP public_62f9dc3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1578
        call public_6310410
        test al, al
        je public_62f9e3e
        lea ecx, ss:[esp+0x20]
        call public_6333e40
        push 0
        mov ecx, esi
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_63108f0
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [ebx+0x5C]
        mov eax, dword ptr ss : [ebp+4]
        lea edi, ds:[ebx+0x58]
        push eax
        push ebp
        mov ecx, edi
        call public_6282c70
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_62fd310
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        jmp public_62f9e97
/*FIXUP public_62f9e3e : nop
        push offset public_63a2000 @0x62f9e3e*/
  FIXUP public_62f9e3e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2000
        mov ecx, esi
        call public_6310410
        test al, al
        je public_62f9e97
        push 0
        mov ecx, esi
        call public_6310a30
        mov dword ptr ss : [esp+0x44], eax
        mov edi, offset public_63ec8f8
        xor ebp, ebp
        public_62f9e62 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62f9e7b
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f9ecb
        public_62f9e7b : nop
        add ebp, 8
        add edi, 8
        cmp ebp, 0x70
        jb public_62f9e62
        xor edi, edi
        public_62f9e88 : nop
        push 1
        mov ecx, esi
        mov dword ptr ds : [ebx+0x64], edi
        call public_63108f0
        fstp dword ptr ds : [ebx+0x68]
        public_62f9e97 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62f9b71
        public_62f9ea6 : nop
        mov ecx, dword ptr ds : [ebx+0x44]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        lea edi, ds:[ebx+0x40]
        je public_62f9f15
        public_62f9eb2 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [edx], 0
        je public_62f9ed0
        test dword ptr ds : [eax+0xC], 0x3FFFFFFF
        je public_62f9ed0
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f9eb2
        jmp public_62f9f15
        public_62f9ecb : nop
        mov edi, dword ptr ds : [edi+4]
        jmp public_62f9e88
        public_62f9ed0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x11DE
/*FIXUP push offset public_63a123c @0x62f9edf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1f90 @0x62f9ee9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1f90
        push eax
        call dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 0x14
        cmp esi, ebp
        je public_62f9f15
        mov edi, edi
        public_62f9f00 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebp
        jne public_62f9f00
        public_62f9f15 : nop
        mov ecx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_62f9f8e
        mov edi, edi
        public_62f9f20 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [edx], 0
        je public_62f9f39
        test dword ptr ds : [eax+0xC], 0x3FFFFFFF
        je public_62f9f39
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f9f20
        jmp public_62f9f8e
        public_62f9f39 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x11E3
/*FIXUP push offset public_63a123c @0x62f9f48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1f10 @0x62f9f52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1f10
        push eax
        call dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        add esp, 0x14
        cmp esi, ebp
        je public_62f9f8e
        public_62f9f67 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_62f9f67
        public_62f9f8e : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        je public_62f9fba
        lea esp, ss:[esp]
        public_62f9fa0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jne public_62f9fa0
        mov dword ptr ds : [ecx], ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_62f9fba : nop
        mov dword ptr ds : [ecx+0x5C], ebx
        mov ecx, dword ptr ss : [esp+0x20]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x62f9b10)
    }
}

#undef public_62f9b4a
#undef public_62f9b71
#undef public_62f9b9b
#undef public_62f9bc0
#undef public_62f9bd9
#undef public_62f9bf4
#undef public_62f9bff
#undef public_62f9c1e
#undef public_62f9c35
#undef public_62f9c5b
#undef public_62f9c6c
#undef public_62f9c8b
#undef public_62f9caa
#undef public_62f9cc9
#undef public_62f9ce8
#undef public_62f9d3d
#undef public_62f9d63
#undef public_62f9d89
#undef public_62f9dc3
#undef public_62f9e3e
#undef public_62f9e62
#undef public_62f9e7b
#undef public_62f9e88
#undef public_62f9e97
#undef public_62f9ea6
#undef public_62f9eb2
#undef public_62f9ecb
#undef public_62f9ed0
#undef public_62f9f00
#undef public_62f9f15
#undef public_62f9f20
#undef public_62f9f39
#undef public_62f9f67
#undef public_62f9f8e
#undef public_62f9fa0
#undef public_62f9fba
